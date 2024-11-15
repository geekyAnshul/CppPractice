#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    int count=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(n==1) break;
        else if(n==2 && s[i]!=s[i+1]){
             count=1; 
             break;
        }
        else if(i==0 && s[i]!=s[i+1]){
            count++;\
            }
        else if(i==n-1 && s[i]!=s[i-1]){
            count++;
        }
       else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
        
    }
    cout<<"total neighbours different from each others are: "<<count;

}