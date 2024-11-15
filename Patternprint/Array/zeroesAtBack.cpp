#include <bits/stdc++.h>
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
    int i=0;
    int j=n-1;
    while(i<j){
      if(arr[i]!=0){
        i++;
      }
      else if(arr[j]==0){
        j--;
      }
      else if(arr[i]==0 && arr[j]!=0){
        swap(arr[i],arr[j]);
      }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}