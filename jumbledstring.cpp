#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1="makemytrip";
    string s2="makemyprit";
    int arr[26]={0};
    for(int i=0;i<s2.length();i++){
        arr[s2[i]-97]++;
    }
    int j=0;
    for(int i=0;i<s1.length();i++){
        if(arr[s1[i]-97]>0){
            s2[j]=s1[i];
            j++;
            --arr[s1[i]-97];
        }
    }
    for(int i=0;i<s2.length();i++){
        cout<<s2[i]<<" ";
    }
    return 0;
}
