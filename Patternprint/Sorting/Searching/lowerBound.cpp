#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,3,5,6,8,9,12,15,18,20};
    int target=19;
    int n=11;
    int low=0;
    int high=n;
    bool flag=false;
    while(low<high){
           int mid=(low+high)/2;
           if(arr[mid]==target){
               cout<<"The lower bound of "<<target<<" is " <<arr[mid-1];
               flag=true;
               break;
           }
           else if(arr[mid]<target) low=mid+1;
           else high=mid-1;
    }
    if(flag==false) cout<<"The lower bound of "<<target<<" is " <<arr[high];
}