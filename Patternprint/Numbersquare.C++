#include <iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"enter the number of columns: ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}