#include <bits/stdc++.h>
using namespace std;
vector<vector<long int> >v(1000001);
bool visited[1000001];

void dfs(int src){
    visited[src]=true;
    for(int i=0;i<v[src].size();i++){
        if(!visited[v[src][i]]){
            dfs(v[src][i]);
        }
    }
}
int main() {
long int t,n,i,j,k,a,b,e;
cin>>t;
for(long int ii=0;ii<t;ii++)
{
    cin>>n>>e;
    for(i=0;i<n;i++){
    v[i].clear();
    visited[i]=false;
    }
    for(i=0;i<e;i++)
    {
        cin>>a>>b;
        v[b].push_back(a);
        v[a].push_back(b);
    }
    long int count =0;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            count++;
            dfs(i);
        }
    }
    cout<<count<<endl;
}
 return 0;
}
