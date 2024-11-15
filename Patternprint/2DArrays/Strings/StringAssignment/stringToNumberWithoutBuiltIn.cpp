#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
   string s="12345";
   int n=s.size();
   int ans=0;
   int product=1;
   for(int i=n-1;i>=0;i--){
     ans=ans+(s[i]-'0')*product;
     product=product*10;
   }
   cout<<"the string converted to integer and Answer is: "<<ans<<endl;

}