#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s="kamal";
    string t="locol";
    
    if(s.size()!=t.size()) cout<<"Length hi badi hai,Isomorphic kya GHANTAAAAA honge....";

     vector<int> v(150,1000);
    bool flag=true;
    for(int i=0;i<s.size();i++) {
        int idx=(int)s[i];
        if(v[idx]==1000) v[idx]=s[i]-t[i];
        else if(v[idx]!=s[i]-t[i]){
            flag=false;
               cout<<"Error";
            }
        }
     for(int i=0;i<150;i++){
        v[i]=1000;
     }

     for(int i=0;i<t.size();i++) {
        int idx=(int)t[i];
        if(v[idx]==1000) v[idx]=t[i]-s[i];
        else if(v[idx]!=t[i]-s[i]){
            flag=false;
               cout<<"Error";
            }
        }
    if(flag==true){
       cout<<"string s and t are isomorphic....";
    }
    }

