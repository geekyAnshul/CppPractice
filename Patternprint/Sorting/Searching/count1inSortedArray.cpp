#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={0,0,0,0,0,0,0,0,0,0,0,00,0,0,0};
    int n=15;
   int low=0;
    int high=n-1;
    int first=0;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==1){
            if(arr[mid-1]!=1){
                 first=mid;
                 break;
            }
            else high=mid-1;
        }
        else if(arr[mid]!=1) low=mid+1;
    }
    if(first==0){
         cout<<"no ones are present";
         
    }
    else{
    int count=n-first;
    cout<<"total no. of ones are: "<<count;
}
}