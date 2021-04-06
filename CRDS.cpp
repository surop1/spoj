#include <bits/stdc++.h>
using namespace std;
#define lli long long int 

int findcards(int n){
    lli sum=0;
    for(lli i=1;i<=n;i++){
        sum=(sum+i);
    }
    sum=(sum*3);
    sum=(sum-n);
    return (sum%1000007);
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<findcards(n)<<" ";
        cout<<"\n";
    }
	return 0;
}