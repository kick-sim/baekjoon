#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int n,m,k,a,b;
vector<int> adj[10001];
bool visited[1001] = {false,};
bool visited_b[1001] = {false,};
void dfs(int v){
    visited[v] = true;
    cout << v << " ";
    for(int next : adj[v]){
        if(!visited[next]){
            dfs(next);
        }
    }
}
void bfs(int v){
    queue<int> q;
    visited_b[v] = true;
    q.push(v);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        cout << front << " ";
        for(int next:adj[front]){
            if(!visited_b[next]){
                visited_b[next] = true;
                q.push(next);
            }
        }
    }
}

int main(){
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(k);
    cout << "\n";
    bfs(k);
}