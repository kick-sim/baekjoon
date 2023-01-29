#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n;
    int *arr_1 = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr_1[i];
    }
    sort(arr_1,arr_1+n);
    cin >> m;
    int num;
    for(int i = 0; i < m; i++) {
        cin >> num;
        cout << binary_search(arr_1, arr_1 + n, num) << "\n";
    }
}