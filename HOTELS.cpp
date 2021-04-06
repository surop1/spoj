#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,sum=0,val;
    cin>>n>>m;
    int arr[n];
    int tempsum=0;
    deque<int> d;
    for(int i=0;i<n;i++){
        cin>>val;
        d.push_back(val);
        tempsum+=val;
        while(tempsum>m){
            tempsum=tempsum-d[0];
            d.pop_front();
        }
        sum=max(sum,tempsum);
    }
    cout<<sum<<" ";
    cout<<endl;
	return 0;
}