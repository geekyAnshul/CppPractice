#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int smallest(int arr[],int idx,int n){
    static int min=100;
    if(idx==n) return min;
    
    if(arr[idx]<min) min=arr[idx];
    smallest(arr,idx+1,n);
}
int main(){
    int arr[]={5,3,6,8,10};
    cout<<smallest(arr,0,5);
}