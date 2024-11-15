#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of Arrays: ";
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        int a=i+1;
        cout<<"Enter the element number:  ";
        cin>>arr[i];
    }
//     cout<<endl;
//      cout<<"Your entered Array is: ";
//     for(int j=0;j<n;j++){
//         cout<<arr[j]<<" ";
//     }

int size = sizeof(arr)/sizeof(arr[0]);
cout<<"Total size of Array is "<<size;

}