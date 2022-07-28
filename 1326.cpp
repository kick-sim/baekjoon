#include <iostream>
#include <vector>
#include <deque>
#include <queue>
using namespace std;
vector<pair<int,bool>> v;
int n;
int bfs(int a,int b){
    deque<pair<int,int>> dq;
    dq.push_back({a,0});
    while(!dq.empty()){
        int front = dq.front().first;
        int count = dq.front().second;
        int mul = v[front].first;
        dq.pop_front();
        if(front == b) return count;
        if(v[front].second) continue;
        v[front].second = true;
        while(true){
            front = front+mul;
            if(front > n-1) break;
            if(!v[front].second) {
                dq.push_back({front, count + 1});
            }
        }
        while(true){
            front = front-mul;
            if(front < 0) break;
            if(!v[front].second) {
                dq.push_back({front, count + 1});
            }
        }
    }
    return -1;

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,a,b;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        v.push_back({k,false});
    }
    cin >> a >> b;
    cout << bfs(a-1,b-1);
}