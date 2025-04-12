#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  int x1,y1,r1;
  int x2,y2,r2;
  cin >> t;
  while(t--){
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if(x1==x2&&y1==y2&&r1==r2) {
      cout << "-1\n";
      continue;
    }
    int dis =pow((x2-x1),2) + pow((y2-y1),2);
    int con1 = pow((r1-r2),2);
    int con2 = pow((r1+r2),2);
    //접점이 1개인 경우
    if(dis == con1 || dis == con2) cout << "1\n";
    //접점이 2개인 경우
    else if(dis < con2 && dis > con1) cout << "2\n";
    //접점이 0개인 경우
    else cout << "0\n";
  }
}

//3
//0 0 13 40 0 37
//0 0 3 0 7 4
//1 1 1 1 1 5