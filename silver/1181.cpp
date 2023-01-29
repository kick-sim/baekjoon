#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int cmp(string a,string b){
    if(a.length() == b.length()){
        return a < b;
    }
    else{
        return a.length() < b.length();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> arr;
    string st;
    for(int i = 0; i < n; i++){
        cin >> st;
        arr.push_back(st);
    }
    sort(arr.begin(),arr.end(),cmp);
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == arr[i + 1]) {
            continue;
        }
        cout << arr[i] << "\n";
    }
}