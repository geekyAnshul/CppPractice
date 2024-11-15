#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // 1 2 3 4 5 
     int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){      // SIRF YAHA PR EK SIGN BADLA HAI.....
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}