#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    string adr,pwd;
    map<string,string> map;
    while(n--){
        cin >> adr >> pwd;
        map[adr] = pwd;
    }
    while(m--){
        cin >> adr;
        cout<<map[adr]<<"\n";
    }
}