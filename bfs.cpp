#include <bits/stdc++.h>
using namespace std;

void bfs(int s,bool* visited,vector<int> adj[]){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    cout<<s<<" ";
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(int i=0;i<adj[curr].size();i++){
            if(!visited[adj[curr][i]]){
                q.push(adj[curr][i]);
                visited[adj[curr][i]]=true;
                cout<<adj[curr][i]<<" ";
            }
        }
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    bool visited[v];
    memset(visited,false,sizeof(visited));
    vector<int> adj[v];
    for(int i=0;i<e;i++){
        int u,w;
        cin>>u>>w;
        adj[u].push_back(w);
        adj[w].push_back(u);
    }
    bfs(0,visited,adj);
    return 0;
}
