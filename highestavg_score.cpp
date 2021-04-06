#include<bits/stdc++.h>
using namespace std;
float average(vector<vector<string>> s){
    int n=s.size();
    unordered_map<string,vector<float>> m;
    for(int i=0;i<n;i++){
        float val=stof(s[i][1]);
        m[s[i][0]].push_back(val);
    }
    int count=0;
    float total=0.0;
    float average=0.0;
    float max_avg=0.0;
    unordered_map<string,vector<float>>::iterator it;
    for(auto p:m){
            count=p.second.size();
            for(int i=0;i<count;i++){
                total+=p.second[i];
                
            }
            average=total/count;
            if(average>max_avg){
                max_avg=average;
            }

            total=0;
        }
    
    // for(it=m.begin();it!=m.end();it++){
    //     for(int i=0;i<it->second.size();i++){
    //         cout<<it->second[i]<<" ";
    //     }
    // }
    return max_avg;
}
int main(){
    vector<vector<string>> s={{"jerry","65"}, {"bob","1"}, {"jerry","93"},{"jerry","93"}, {"jerry","100"},{"Eric","83"}};
    cout<<average(s)<<" ";
    return 0;
}
