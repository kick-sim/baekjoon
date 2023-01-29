#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int cmp(pair<int,int> f,pair<int,int> s){
    if(f.first == s.first) {
        return f.second < s.second;
    }
    return f.first < s.first;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n,cmp);
    for(int i = 0; i < n; i++){
        cout << p[i].first << " " << p[i].second << "\n";
    }
}