#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    //5 4 3 2 1
    string s="XYZABCXYYO";
    int n=s.size();
    string str="";
    for(int i=0;i<n;i++){
        if(s[i]>'X'){
           str.push_back(s[i]);
         }
    }
    cout<<"charcters greater than X are: "<<str;
    cout<<endl;
    int m=str.size();
    
    for(int i=0;i<m-1;i++){
        bool flag=true;
        for(int j=0;j<m-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
    if(flag==true) break;
    }

    cout<<"sorted string is: "<<str;
}