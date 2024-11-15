#include <iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    int nst=n-1;
    int nsp=1;
   // sabse upar vaale line ke liye.....
    for(int x=1;x<=2*n-1;x++){
            cout<<"*";
        }
    cout<<endl;


    //baad me pura loop
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp=nsp+2;
        for(int m=1;m<=nst;m++){
            cout<<"*";
        }
        nst--;
        cout<<endl;
    }
}