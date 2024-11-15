#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string> v;
    v.push_back("ss");
    v.push_back("s");
    v.push_back("sss");

    int n=v.size();
    if(n==1) cout<<"No Common Prefix";
    sort(v.begin(),v.end());
    string first= v[0];
    string last= v[n-1];
    string s="";
    bool flag=false;
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            flag=true;
            s=s+first[i];
        }
        else{
            cout<<"404 No Prefix Found";
            break;
        }
    }
    if(flag==true) cout<<"commom prefix found was: "<<s<<endl;

    
}