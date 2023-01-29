#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int s = 0;
    for(int i = 0; i < n; i++){
        s = s + a[i] * b[n-i-1];
    }
    cout << s;
}