#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void findxy(long long a,long long b){
    long long int res=a*b;
    long long GCD=gcd(a,b);
    a/=GCD;
    b/=GCD;
    cout<<b<<" "<<a;
}

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    long long a,b;
	    cin>>a>>b;
	    findxy(a,b);
	    cout<<endl;
	}
	return 0;
}