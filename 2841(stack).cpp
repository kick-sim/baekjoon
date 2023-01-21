#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
using namespace std;

int main(){
    int n,p,row,prat;
    int cnt = 0;
    cin >> n >> p;
    stack<int> sta[7];
    while(n--){
        cin >> row >> prat;
        if(sta[row].size() == 0){
            sta[row].push(prat);
            cnt++;
        }else{
            int k = sta[row].top();
            while(prat < k){
                sta[row].pop();
                cnt++;
                if(sta[row].size() == 0){
                    k = 0;
                }else {
                    k = sta[row].top();
                }
            }
            if(prat > k){
                sta[row].push(prat);
                cnt++;
            }
        }
    }
    cout << cnt;
}