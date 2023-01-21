#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* box = new int[n];
    int* box_num = new int[n]{0};
    int temp;
    for(int i = 0; i < n; i++){
        cin >> box[i];
        box_num[i] = 1;
        temp = box_num[0];
        for(int j = 0; j <= i; j++){
            if(box[i] > box[j]) {
                if(temp <= box_num[j]){
                    temp = box_num[j];
                    temp++;
                }
            }
        }
        box_num[i] = temp;
    }
    int temp_ = box_num[0];
    for(int i = 1; i < n; i++){
        if(temp_ < box_num[i]){
            temp_ = box_num[i];
        }
    }
    cout << temp_ << endl;
}