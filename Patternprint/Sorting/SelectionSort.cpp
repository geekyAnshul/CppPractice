#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int arr[]={5,4,3,2,1,};
    int n=5;
    for(int ele: arr){
        cout<<ele<<" ";
    }

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
    swap(arr[i],arr[minidx]);
    }
  
   
    cout<<endl;
      for(int ele: arr){
        cout<<ele<<" ";
    }

 }
