#include <bits/stdc++.h>
using namespace std;

int balldropping(int b,int u){
    int ballfloor[b+1][u+1];
    int res;
    int i,j,x;
    for(i=1;i<=b;i++){
        ballfloor[i][1]=1;
        ballfloor[i][0]=0;
    }
    for(j=1;j<=u;j++){
        ballfloor[1][j]=j;
    }
    for(i=2;i<=b;i++){
        for(j=2;j<=u;j++){
            ballfloor[i][j]=INT_MAX;
            for(x=1;x<=j;x++){
                res=1+max(ballfloor[i-1][x-1],ballfloor[i][j-x]);
                if(res<ballfloor[i][j]){
                    ballfloor[i][j]=res;
                }
            }
        }
    }
    return ballfloor[b][u];
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p,b,u;
        cin>>p>>b>>u;
        cout<<p<<" "<<balldropping(b,u)<<endl;
    }
}

