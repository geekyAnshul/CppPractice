#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,1,3,3,3,5,5,5,6,7,8,8,8};
    int x=8;
    int n=13;
    int low=0;
    int high=n;
    while(low<high){
        int mid=(high+low)/2;
        if(arr[mid]==x){
            if(arr[mid]!=arr[mid-1]){
                cout<<mid+1;
                break;
            }
            else {
                high=mid-1;
            }
        }

        if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
}



