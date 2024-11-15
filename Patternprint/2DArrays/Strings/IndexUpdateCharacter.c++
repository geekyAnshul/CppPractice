#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"enter your string: ";
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(i%2==0) s[i]='s';
    }
    cout<<"Updated string is: "<<s;
}