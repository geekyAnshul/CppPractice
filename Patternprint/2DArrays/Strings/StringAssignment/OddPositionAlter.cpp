#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="physicsWallah";

    for(int i=0;i<s.size();i++){
        if(i%2==1){
            s[i]='#';
        }
    }
    cout<<"string is: "<<s<<endl;
}