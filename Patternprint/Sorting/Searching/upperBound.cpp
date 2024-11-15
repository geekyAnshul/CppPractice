#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,4,5,6,7,8,9,11,14};
    int target=9;
    int n=10;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==target){
              cout<<arr[mid+1];
              flag=true;
               break;
              
        }
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
  if(flag==false){
    cout<<arr[low];
  };
    
    

}