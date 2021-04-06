HACKRNDM 

#include <bits/stdc++.h>
using namespace std;

int pairs(int arr[],int n,int k){
    sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n;i++){
        int low=i+1,high=n-1;

        while(low<=high){
            int mid=low+((high-low)/2);
            if(arr[mid]-arr[i]==k){
                high=mid-1;
                count=count+1;
            }
            else if(arr[mid]-arr[i]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
   return count; 
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
	
	cout<<pairs(arr,n,k)<<" ";
	}
	return 0;
}