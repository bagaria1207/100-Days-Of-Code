
vector<int> adj[N];
bool visited[n];

void dfs(int s){
    if(visited[s]){
        return;
    }
    visited[s]=true;
    for(int u: adj[s]){
        dfs([u]);
    }
}
