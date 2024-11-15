#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,2,1};
    int n=8;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else high=mid-1;
    }
}