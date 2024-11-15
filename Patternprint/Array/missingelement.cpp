#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,2,4,5,6,7};
    int n=5;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
     }
     int last=arr[n-1];
     int real=last*(last+1)/2;

     cout<<real-sum;
}