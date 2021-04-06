#include <bits/stdc++.h>
using namespace std;

long long a[500005];
map<long long int,int> mp;
void precompute() {
    a[0]=0;
    mp[0]=1;
    for(int i=1;i<500005;i++){
    int val = a[i-1]-i;
    if(val>0 && mp[val]==0){
        a[i] = val;
    }
    else{
        a[i] = a[i-1] + i;
    }
            mp[a[i]]=1;

    }
    
    }
int main() {
    precompute();
    while(1){
        int k;
        cin>>k;
        if(k==-1)
            return 0;
        cout<<a[k]<<endl;
    }
return 0;
}