#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,4,5,6,2,3,4};
    int n=7;
    int low=1;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
             cout<<mid;
             break;
        }
       else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
            high=mid-1;
        }
        else low=mid+1;
    }
    return -1;
}
