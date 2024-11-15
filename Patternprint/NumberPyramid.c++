#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    int a=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        nsp--;
        for(int k=1;k<=a;k++){
            cout<<k<<" ";
        }
        a=a+2;
        cout<<endl;
    }
}