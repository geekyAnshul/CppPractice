#include<iostream>
using namespace std;

int main(){
    int arr[6]={10,8,6,4,2,1};
    int target=6;
    int n=6;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<mid;
            return mid;
        }
        else if(arr[mid]>target) low=mid+1;
        else high=mid-1;
    }
    return -1;

}