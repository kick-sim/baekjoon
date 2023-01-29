#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    queue<int> q;
    vector<int> n_q;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    cout << "<";
    while(q.size() > 1){
        for(int i = 1; i < k; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";

}