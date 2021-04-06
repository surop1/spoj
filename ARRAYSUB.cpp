#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    priority_queue<int> pq,pq2;
    vector<int> v;
    for(int i=0;i<k;i++){
            pq.push(arr[i]);
    }
    v.push_back(pq.top());
    for(int i=k;i<=n;i++){
        if(arr[i-k]==pq.top()){
            pq.pop();
        }
        else{
            pq2.push(arr[i-k]);
        }
        while(!pq2.empty() && pq2.top()==pq.top()){
            pq2.pop();
            pq.pop();
        }
        pq.push(arr[i]);
        v.push_back(pq.top());
        
    }
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
	return 0;
}