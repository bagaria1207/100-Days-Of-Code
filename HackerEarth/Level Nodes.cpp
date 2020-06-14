#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	vector<int> adj[N+1];
	for(int i=0;i<N-1;i++){
		int a, b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int x;cin>>x;
	int level[N+1] = {0};
	bool visited[N+1] ={false};
	queue<int> q;
	int start = 1;
	visited[start] = true;
	q.push(start);
	level[start] = 1;
	while(!q.empty()){
		int front_q = q.front();
		q.pop();
		for(int u : adj[front_q]){
			if(visited[u]){
				continue;
			}
			else{
                level[u] = level[front_q] + 1;
				visited[u] = true;
				q.push(u);
			}
		}
	}
	int cnt = 0;
	for(int i=0;i<N+1;i++){
        if(level[i]==x){
            cnt++;
        }
	}
	cout<<cnt;
	return 0;
}
