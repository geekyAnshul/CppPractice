#include <iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the string : ";
    string s;
    cin>>s;
    int count=0;
   
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
    }
        i++;
    }
    cout<<"total vowels were: "<<count<<endl;
}