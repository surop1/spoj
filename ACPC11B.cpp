#include <bits/stdc++.h>
using namespace std;

int mindist(int arr1[],int arr2[],int m,int n){
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    int a=0,b=0;
    int res=INT_MAX;
    while(a<m && b<n){
        if(abs(arr1[a]-arr2[b])<res){
            res=abs(arr1[a]-arr2[b]);
        }
        if(arr1[a]<arr2[b]){
            a++;
        }
        else{
            b++;
        }
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m;
        cin>>m;
        int arr1[m];

        for(int i=0;i<m;i++){
            cin>>arr1[i];
        }
        int n;
        cin>>n;
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        cout<<mindist(arr1,arr2,m,n)<<" ";
        cout<<endl;
        
}
	return 0;
}