#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int x=gcd(a,b);
        if(c%x==0){
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }
        else{
        cout<<"Case"<<" "<<i+1<<": No"<<endl;}

    }
    
}

