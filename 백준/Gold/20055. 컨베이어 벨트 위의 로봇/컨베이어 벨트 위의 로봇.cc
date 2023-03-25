#include<iostream>
#include<queue>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;
deque<bool> belt;
deque<int> durable;
int cnt = 0;
int n,k;
void rotate(){
    belt.push_front(belt.back());
    belt.pop_back();
    durable.push_front(durable.back());
    durable.pop_back();
    belt[n-1] = 0;
}
void robot_move(){
    for(int i = n-2; i >= 0; i--){
        if(durable[i+1] > 0 && !belt[i+1] && belt[i]){
            belt[i] = 0;
            belt[i+1] = 1;
            durable[i+1]--;
            if(durable[i+1] == 0) cnt++;
        }
    }
    belt[n-1] = 0;
}
void put_robot(){
    if(durable[0] > 0){
        durable[0]--;
        if(durable[0] == 0) cnt++;
        belt[0] = 1;
    }
}
bool check_dur(){
    if(cnt >= k)
        return 1;
    else return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for(int i = 0; i < 2*n; i++){
        int dur;
        cin >> dur;
        durable.push_back(dur);
        belt.push_back(false);
    }
    int count = 0;
    while(1){
        rotate();
        robot_move();
        put_robot();
        count++;
        if(check_dur())
            break;
    }
    cout << count;
}


