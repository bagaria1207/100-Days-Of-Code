queue<int> q;
bool visited[N];
int distance[N];

void bfs(int x){
    visited[x] = true;
    distance[x] = 0;
    q.push(x);
    while(!q.empty()){
        int front_q = q.front();
        q.pop();
        for(auto u : adj[s]){
            if(visited[u]){
                continue;
            }
            else{
                visited[u]=true;
                distance[u]=distance[s]+1;
                q.push(u);
            }
        }
    }
}
