#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,2,5,1,2,9,7};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=0;
    for(int i=0;i<=n-k;i++){\
       int sum=0;
        for(int j=i;j<i+k;j++){
          sum=sum+arr[j];
        }
        maxsum=max(maxsum,sum);
    }
    cout<<maxsum;
}