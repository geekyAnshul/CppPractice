#include<iostream>
using namespace std;


int sumo(int arr[],int idx,int n,int sum){
    //static int sum=0;
    if(idx==n) return sum;
    sumo(arr,idx+1,n,sum+arr[idx]);
}

int main(){
    int arr[]={5,6,3,10,1};
    cout<<sumo(arr,0,5,0);
}