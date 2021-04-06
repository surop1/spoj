#include <bits/stdc++.h>
using namespace std;

int sum(int arr1[],int arr2[],int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int res,te=0;
    for(int i=0;i<n;i++){
        res=arr1[i]*arr2[i];
        te+=res;
    }
    return te;
}
int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<sum(arr1,arr2,n)<<" ";
    cout<<endl;
}
}
