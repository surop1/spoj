#includebitsstdc++.h
using namespace std;
#define lli long long  

lli notobeadded(lli n){
    for(int i=0;in;i++){
    lli sum=0,rem=0;
    lli cur=n;
    while(cur!=0){
        rem=(lli)cur%10;
        cur=cur10;
        sum+=rem;
    }
    if (n%sum==0){  
        return n;}
    else {n=n+1;}

    }
    return 0;
    
     lli num=0;
     for(lli i=0;i=INT_MAX;i++){
         num=n+i;
         if(num%sum==0){
             return num;
         }
     }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;it;i++){
        lli n;
        cin>>n;
        coutnotobeadded(n);
        cout<<n;
    }
    return 0;
}
