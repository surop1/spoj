#include <bits/stdc++.h>
using namespace std;
void printClosest(int arr[],int n,int x){
    int res_l,res_r;
    int left=0,right=n-1;
    int diff=INT_MAX;
    while(left<=right){
        if(abs(arr[right]+arr[left]-x)<diff){
            res_l=left;
            res_r=right;
            diff=abs(arr[right]+arr[left]-x);
        }
        else if(arr[right]-arr[left]>x){
            right--;
        }
        else{
            left++;;
        }
    }
    cout<<arr[res_l]<<" "<<arr[res_r]<<endl;
}

int main()
{
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54;
    int n = sizeof(arr)/sizeof(arr[0]);
    printClosest(arr, n, x);
    return 0;
}
