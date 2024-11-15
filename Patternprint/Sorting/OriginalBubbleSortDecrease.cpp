#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    //1 2 3 4 5
     int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your entered array was: ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}