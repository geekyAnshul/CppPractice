#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,4,4,5,6,7,8};
    int n=9;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>mid) low=mid+1;
        else if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                 cout<<arr[mid]<<" is the duplicate";
                 break;
            }
            else high=mid-1;
        }
    }
}
