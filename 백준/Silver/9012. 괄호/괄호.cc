#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    stack<char> s;
    string str;
    for(int i = 0 ; i < t ; i++){
        cin >>str;
        int str_size = str.size();
        int sig = 0;
        for(int j = 0; j < str_size; j++){
            if(str[j] == '(')
                s.push(str[j]);
            if(str[j] == ')') {
                if(s.empty())
                    s.push(str[j]);
                else if(s.top() == '(')
                    s.pop();
            }
        }

        if(s.empty())
            cout << "YES\n";
        else {
            cout << "NO\n";
            while(!s.empty()) {
                s.pop();
            }
        }
    }

}