#include <bits/stdc++.h>
using namespace std;

long long int odddivisor(long long int n){
    if(n%2!=0){
        return n;
    }
    long long int num=n;
    while(num%2==0){
        num/=2;
    }
    return num;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        long long int x=odddivisor(n);
        cout<<"Case "<<i+1<<": "<<x<<endl;

    }
    
}

