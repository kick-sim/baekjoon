#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

char map[102][102];
bool visited[102][102];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int distanc[101][101];
void bfs(int a,int b){


    queue<pair<int,int>> q;
    q.push({a,b});
    distanc[a][b] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            if(!visited[next_x][next_y] && map[next_x][next_y] == '1'){
                distanc[next_x][next_y] = distanc[x][y] +1;
                visited[next_x][next_y] = true;
                q.push({next_x,next_y});
            }
        }
    }
}

int main(){
    int n,m;
    char a;
    cin >> n >> m;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a;
            map[i][j] = a;
        }
    }
    bfs(1,1);
    cout << distanc[n][m] << "\n";
}