#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,t;
    cout<<"enter the first string: ";
    cin>>s;
    
    cout<<"enter these second string: ";
    cin>>t;

    if(s.size()!=t.size()){
        cout<<"not an anagram";
    }
    else{
        int arr[26]={0};
        int n=s.size();

        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        bool flag=true;
         for(int i=0;i<26;i++){
            if(arr[i]!=0){
                flag=false;
                break;
            }
    }

    if(flag==true){
        cout<<"found anagram";
    }
    else cout<<"not an anagram";
}



   
}