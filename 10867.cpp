#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1])
            continue;
        cout << arr[i] << " ";
    }
}