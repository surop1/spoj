#include <bits/stdc++.h>
using namespace std;

void dfs(int s,bool* visited,vector<int> adj[]){
    visited[s]=true;
    cout<<s<<" ";
    for(int j=0;j<adj[s].size();j++){
        if(!visited[adj[s][j]]){
            dfs(adj[s][j],visited,adj);
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
    dfs(0,visited,adj);
    return 0;
}
