#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int n,m,v,a,b;
vector<int> adj[1001];
bool visited_dfs[1001] = {false};
bool visited_bfs[1001] = {false};

void dfs(int h){
    visited_dfs[h] = true;
    cout << h << " ";
    for(int next : adj[h]){
        if(!visited_dfs[next]){
            dfs(next);
        }
    }
}
void bfs(int h){
    visited_bfs[h] = true;
    queue<int> q;
    q.push(h);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        visited_bfs[front] = true;
        cout << front << " ";
        for(int next:adj[front]){
            if(!visited_bfs[next]){
                q.push(next);
                visited_bfs[next] = true;
            }
        }
    }
}

int main(){
    cin >> n >> m >> v;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1;i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(v);
    cout << "\n";
    bfs(v);
}