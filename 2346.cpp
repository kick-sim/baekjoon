//#include <iostream>
//#include <vector>
//#include <deque>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    int number;
//    cin >> n;
//    deque<pair<int,int>> dq;
//    for(int i = 0; i < n; i++){
//        cin >> number;
//        dq.push_back(make_pair(number,i+1));
//    }
//    while(true){
//        cout << dq.front().second << " ";
//        int next = dq.front().first;
//        dq.pop_front();
//        if(dq.empty()) break;
//        if(next > 0){
//            for(int i = 0; i < next-1; i++) {
//                dq.push_back(dq.front());
//                dq.pop_front();
//            }
//        }else if(next < 0){
//            for(int i = next; i < 0; i++) {
//                dq.push_front(dq.back());
//                dq.pop_back();
//            }
//        }
//    }
//}
