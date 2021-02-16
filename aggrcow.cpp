#include <bits/stdc++.h>
using namespace std;

bool isFeasible(int mid,int arr[],int n,int k){
    int pos=arr[0];
    int elements=1;
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=mid){
            pos=arr[i];
            elements++;
            if(elements==k){
                return true;
            }
        }
    }
    return 0;
}
int mindistance(int arr[],int n,int k){
    sort(arr,arr+n);
    int res=-1;
    int left=1,right=arr[n-1]-arr[0];
    while(left<right){
        int mid=(left+right)/2;
        if(isFeasible(mid,arr,n,k)){
            res=max(res,mid);
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<mindistance(arr,n,k)<<" ";
        cout<<endl;
    }
	return 0;
}