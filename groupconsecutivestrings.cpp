#include <bits/stdc++.h>
using namespace std;
char convert(int i)
{
    return (i%26) + 'a';
}


int main() {
    string s="acebdpqrts";
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;){
        int j=i;
        char start='a'+i;
        while(j<26 && arr[j]==1){
            j++;
        }
        if (j>i){
            cout << start << ":" << convert(j-1) << " ";
            i=j+1;
        }
        else i++;
        
    }
    return 0;
}

