#include <bits/stdc++.h>
using namespace std;

vector<int> nextsmallereele(int arr[],int n){
    stack<int> s;
    unordered_map<int,int> m;
    vector<int> v;
    s.push(arr[0]);
    for(int i=1;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty()==false && s.top()>arr[i]){
            m[s.top()]=arr[i];
            s.pop();
        }
        s.push(arr[i]);
    }
    while(s.empty()==false){
        m[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++){
        v.push_back(m[arr[i]]);
    }
    return v;
}
int main()
{
    int arr[]= {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    v=nextsmallereele(arr, n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
