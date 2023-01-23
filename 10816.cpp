#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<int,int> map;
    int n;
    int num;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> num;
        map[num]++;
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> num;
        cout << map[num] << " ";
    }
}