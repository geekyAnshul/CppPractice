#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
   string s;
   cout<<"enter the string: ";
   getline(cin,s);
   
   vector<int> v(26,0);
   
   for(int i=0;i<s.length();i++){
      int ch=s[i];
      int ascii = int(ch);
      v[ascii-97]++;
   }
   int max=0;
   for(int i=0;i<26;i++){
    if(v[i]>max) max=v[i];
   }
   char ansi;
   for(int i=0;i<26;i++){
    if(v[i]==max){
        int ans=i;
         ansi=char(ans+97);
         cout<<ansi<<" "<<max<<endl;  
    }
   }

 
}

