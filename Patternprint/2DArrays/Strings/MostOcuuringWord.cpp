#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"enter the sentence: ";
    getline(cin,s);
    
    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    int maxCount=1;
    int count=1;
    string ans;
    for(int i=1;i<v.size();i++){
       if(v[i]==v[i-1]) count++;
       else count=1;
       maxCount=max(maxCount,count);
       
    }
    cout<<"maximum count: "<<maxCount<<" ";
    
    
    
    count=1;

    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxCount==count){
            cout<<v[i]<<" ";
        }
    }
   
}