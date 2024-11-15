#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,4,3,6,7,4,2};
    int n=7;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=0){
            if(arr[j]>arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}