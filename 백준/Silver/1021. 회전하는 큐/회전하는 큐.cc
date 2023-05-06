#include<iostream>
#include<queue>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> rotque;
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        rotque.push_back(i);
    }
    int cnt = 0;
    for(int i = 0; i < m; i++){
        int k,index = 0;
        cin >> k;
        for(int j = 0; j < rotque.size(); j++){
            if(rotque[j] == k){
                index = j;
                break;
            }
        }
        if(index < rotque.size()-index){
            while(k != rotque.front()) {
                rotque.push_back(rotque.front());
                rotque.pop_front();
                cnt++;
            }
            rotque.pop_front();
        }
        else{
            while(k != rotque.front()) {
                rotque.push_front(rotque.back());
                rotque.pop_back();
                cnt++;
            }
            rotque.pop_front();
        }
    }
    cout << cnt << "\n";
}

