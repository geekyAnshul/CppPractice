#include <iostream>
using namespace std;

int main(){
    int arr[8]={0,2,1,2,1,2,0,0};
    int n=8;
    
//     int no1=0;
//     int no2=0;
//     int no0=0;

//     for(int i=0; i<n; i++){
//         if(arr[i]==0) no0++;
//         else if(arr[i]==1) no1++;
//         else if(arr[i]==2) no2++;
//     }

//     for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//     cout<<endl;
//      for(int i=0;i<n;i++){
//         if(i<no0) arr[i]=0;
//         else if(i<no0+no1) arr[i]=1;
//         else arr[i]=2;

// }

 for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }

     cout<<endl;
     int low=0;
     int high=n-1;
     int mid=0;

     while(mid<high){
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }

        else if(arr[mid]==0){
           swap(arr[mid],arr[low]);
           mid++;
           low++;
        }

        else if(arr[mid]==1){
            mid++;
        }
     
     }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }




}