#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,1,1,1,2,3,4,4,4,4,4,4,5,5,5,6};
    int n=16;
    int x=5;
    int low=0;
    int high=n;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                flag=true;
                 cout<<mid+1;
                 break;
            }
            else low=mid+1;
        }
        else if(arr[mid]<x){
            low=mid+1;
            }
        else high=mid-1;
        }

     if(flag==false) cout<<"not found";
    }

