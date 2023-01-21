#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool binary_search(int* ar,int t,int size){
    int m;
    int s = 0;
    int e = size - 1;
    while(s <= e){
        m = (s+e)/2;
        if(t == ar[m]) return 1;
        else if(ar[m] > t) e = m-1;
        else s = m + 1;
    }
    return 0;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int* arr_1 = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr_1[i];
    }
    sort(arr_1,arr_1+n);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        cout << binary_search(arr_1,t,n) << " ";
    }
}