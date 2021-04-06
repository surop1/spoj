#include<bits/stdc++.h>
using namespace std;

void pairedElements(int arr[],int k,int n){
    vector<pair<int,int>> v;
    pair<int,int> p;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end());
    int start=0,end=n-1;
    bool flag=0;
    while(start<end){
        if(v[start].first+v[end].first==k){
            flag=1;
            cout<<v[start].second<<" "<<v[end].second<<endl;
            start++;
        }
        else if(v[start].first+v[end].first<k){
            start++;
        }
        else{
            end--;
        }
        
    }
    if(!flag){
        cout<<-1<<endl;
    }

}
int main(){
    int arr[] = {2, 3, 4, -2, 6, 8, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=6;
    pairedElements(arr, k, n);

    return 0;
}
