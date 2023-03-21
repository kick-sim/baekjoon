#include<iostream>
#include<queue>
#include<deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    string integer;
    deque<char> q;
    cin >> n >> k;
    cin >> integer;
    for(int i = 0; i < integer.length(); i++){
        while(k && !q.empty() && q.back()<integer[i]){
            q.pop_back();
            k--;
        }
        q.push_back(integer[i]);
    }
    for(int i = 0; i < q.size() - k; i++)
        cout << q[i];
}


