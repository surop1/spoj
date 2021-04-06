#include <bits/stdc++.h>
using namespace std;
long long int tree[1000000];


long long woodcollected(long long int n,long long int m){
    long long int sum=0;
    for(long long int i=n-1;i>=0;i--){
        if(tree[i]-m<=0)
            break;
        sum+=(tree[i]-m);
    }
    return sum;
}
long long int find_height(long long int n,long long int k){
    sort(tree,tree+n);
    long long int low=0,high=tree[n-1];
    long long int ans=0;
    while(low<=high){
        long long int mid=low+((high-low)/2);
        long long int collected=woodcollected(n,mid);
        if(collected>=k){
        	ans=mid;
        	low=mid+1;
        }
        // if(collected=>k){
        //     low=mid+1;
        // }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main() {
    long long int n,k;
    cin>>n>>k;
    for(long long int i=0;i<n;i++){
        cin>>tree[i];
    }
    cout<<find_height(n,k)<<" ";
    cout<<endl;
	return 0;
}