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

    cout<<"transpose of the matrix : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int j=0 ;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(arr[i][j],arr[n-i-1][j]);
    }
}

cout<<"the 90 degree rotation: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}