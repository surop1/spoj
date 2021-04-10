#include <bits/stdc++.h>
using namespace std;

void printstr(char str[],int n,int k){
    if(k>n){
        return;
    }
    int i;
    int part_size;
    // part_size=n/k;
    for(int i=0;i<n;i++){
        if(i%k==0){
            cout<<endl;
        }
        cout<<str[i];
    }
    
}
int main()
{
    char str[] = "surbhi";
    int k=3;
    int n=strlen(str);
    printstr(str,n,k);
    return 0;

}
