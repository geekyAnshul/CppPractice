#include <iostream>
using namespace std;

int main(){
    int arr[8]={0,4,6,-3,-10,-100,1,2};
    int n=8;

     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;

     int i=0;
     int j=n-1;

     while(i<j){
        if(arr[i]>=0 && arr[j]<0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else if(arr[i]<0) i++;
        else if(arr[j]>0) j--;
     }
     for(int m=0;m<n;m++){
         cout<<arr[m]<<" ";
     }

     cout<<"anshul";

    // int nop=0;
    // int non=0;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>0) nop++;
    //     else non++;
    // }

    // for(int i=0;i<n;i++){
    //     if(i<non) arr[i]=-1;
    //     else arr[i]=100;
    // }

    // for(int i=0;i<n;i++){
    //      cout<<arr[i]<<" ";
    //  }

    //  cout<<"anshul";

      
}