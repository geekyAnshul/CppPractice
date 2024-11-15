#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s,t;
    cout<<"enter the first string: ";
    cin>>s;
    
    cout<<"enter these second string: ";
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int n=s.size();
    bool flag=true;
    if(s.size()!=t.size()){
        flag=false;
        cout<<"not an anagram";
        }
    for(int i=0;i<n;i++){
         if(s[i]!=t[i]){
           cout<<"not an anagram...";
           flag=false;
           break;
         }
    }
    if(flag==true) cout<<"S and T are Anagrams";
}