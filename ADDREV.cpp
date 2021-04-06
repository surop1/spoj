#include <bits/stdc++.h>
using namespace std;

int reverse(int num){
    int sum=0;
    int rem=0;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int res=reverse(x)+reverse(y);
        res=reverse(res);
        cout<<res<<" ";
        cout<<endl;
    }
	return 0;
}