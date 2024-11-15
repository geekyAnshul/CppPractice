#include <iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the size of Arrays: ";
    cin>>n;
   int arr[n];
   cout<<"Enter the element number:  ";
    for(int i=0;i<n;i++){
        int a=i+1;
       cin>>arr[i];
    }
   cout<<"your array was: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int max1=INT16_MIN;
    int max2=INT16_MAX;
    int max3=INT16_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
    }
    else if(arr[i]>max2){
        max3=max2;
        max2=arr[i];
    }
    else if(arr[i]>max3){
        max3=arr[i];
    }
    }
    cout<<"first maximum: "<<max1<<endl;
     cout<<"second maximum: "<<max2<<endl;
      cout<<"third maximum: "<<max3<<endl;
}