#include<iostream>
#include<queue>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;
string s,t;
int bfs(){
    queue<string> q;
    q.push(t);
    while(!q.empty()){
        string k = q.front();
        q.pop();
        if(k == s) {
            return 1;
        }
        if(k.length() > s.length()){
            string str = k;
            if(k.back() == 'A') {
                k.pop_back();
                q.push(k);
            }
            reverse(str.begin(), str.end());
            if(str.back() == 'B') {
                str.pop_back();
                q.push(str);
            }
        }
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s >> t;
    cout << bfs();
}