#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
   if(n==1){
       cout<<"niether prime nor composite";
       return false;
   }
   bool flag=true;
    for(int i=2;i<sqrt(n);i++){
         if(n%i==0){
            cout<<"Is is not a prime number";
            flag=false;
            return false;
         }
    }
    if(flag==true){
         cout<<"Yes, it is a prime number.....";
         return true;
    }

    
}