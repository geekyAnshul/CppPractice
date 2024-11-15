#include <iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the size of Arrays: ";
    cin>>n;
   int arr[n];
   cout<<"Enter the element number:  ";
    for(int i=0;i<n;i++){
       // int a=i+1;
        cin>>arr[i];
    }
    cout<<"your array was: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int tar;
    cout<<"enter the target: ";
    cin>>tar;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>tar){
            count++;
        }
    }
    cout<<count<<" elements are greater than target....";
}