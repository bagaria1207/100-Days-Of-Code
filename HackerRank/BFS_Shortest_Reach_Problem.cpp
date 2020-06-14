#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){

        //To Store Result
        vector<int> res;
        int N,m;
        cin>>N>>m;
        vector<int> adj[N+1];
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int start;
        cin>>start;

        //BFS CODE Starts Here
        int level[N+1] = {-1};
        int distance[N+1];
        for(int i=0;i<N+1;i++){
            distance[i] = -1;
        }
        bool visited[N+1] = {false};
        queue<int> q;
        q.push(start);
        level[0] = 1;
        distance[0] = 0;
        distance[start] = 0;
        level[start] = 1;
        visited[start] = true;
        while(!q.empty()){
            int front_q = q.front();
            q.pop();
            for(auto u: adj[front_q]){
                if(visited[u]){
                    continue;
                }
                else{
                    distance[u] = distance[front_q]+6;
                    level[u] = level[front_q] + 1;
                    visited[u] = true;
                    q.push(u);
                }
            }
        }
        for(int i=1;i<N+1;i++){
            if(distance[i]!=0){
                res.push_back(distance[i]);
            }
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
    }
    return 0;
}
