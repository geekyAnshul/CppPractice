#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s="dad";
    int n=s.size();
    bool flag=true;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            flag=false;
            cout<<"Not a palindrome"<<endl;
            break;
        }
    }
    if(flag==true)
          cout<<"palindrome"<<endl;
}
