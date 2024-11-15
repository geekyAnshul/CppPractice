#include <iostream>
#include <math.h>
using namespace std;

int main(){
     int n;
    cout<<"enter dimensions of matrix: ";
    cin>>n;
    cout<<"enter elements of the matrix: ";
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   cout<<"original matrix is : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
            }
        }
        
    }

}