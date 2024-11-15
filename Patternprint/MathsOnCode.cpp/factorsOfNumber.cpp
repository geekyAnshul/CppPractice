#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    // bool flag=true;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         flag=false;
    //     }
    // }
    //if(flag==true) cout<<"There is no factor if this given number";

    for(int i=1;i<sqrt(n);i++){
       if(n%i==0){
        cout<<i<<" ";      //<<n/i<<" ";
       }
    }

    for(int i=sqrt(n);i>=1;i--){
       if(n%i==0){
        cout<<n/i<<" ";     //<<n/i<<" ";
       }
    }

}