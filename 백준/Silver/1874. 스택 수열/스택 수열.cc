#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack<int> s;
    vector<char> op;
    int* seq = new int[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }
    for(int i = 1; i <= n; i++){
        s.push(i);
        op.push_back('+');
        while(!s.empty()&&s.top() == seq[cnt]){
            s.pop();
            op.push_back('-');
            cnt++;
        }
    }
    if(!s.empty())
        cout << "NO\n";
    else
        for(int i = 0; i < op.size(); i++){
            cout << op[i] << "\n";
        }
}