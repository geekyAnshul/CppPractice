#include <iostream>
using namespace std;

int main(){
//taking input of original array
    int m;
    cout<<"enter the number of rows: ";
    cin>>m;

    int n;
    cout<<"enter the number of columns: ";
    cin>>n;
    cout<<"enter elements of the matrix: ";
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
  
int l1,r1;
cout<<"coordinates 1: ";
cin>>l1>>r1;

int l2,r2;
cout<<"coordinates 2: ";
cin>>l2>>r2;

int sum=0;
for(int i=min(l1,l2);i<=max(l1,l2);i++){
    for(int j=min(r1,r2);j<=max(r1,r2);j++){
        sum+=arr[i][j];
    }

}

cout<<"sum is: ";
cout<<sum;

}