#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the Number of ROWS: ";
    cin>>r;
    // cout<<endl;
    int c;
    cout<<"Enter the Number of COLUMNS: ";
    cin>>c;
    //cout<<endl;

    int arr[r][c];

    cout<<"Enter the Elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your 2D Array is like: " << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Your transposed matrix is like: " << endl;

    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}