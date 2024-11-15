#include <iostream>
using namespace std;

int main(){
    int arr1[5]={2,4,5,0,0};
    int arr2[2]={8,9};

    int i=5;
    int j=2;
    int k;
    for(int i=0;i<5;i++){
        if(arr1[i]==0){
           k=i;
           break;
        }
    }

    while(i==0 && j==0){
        if(arr1[k]>arr2[j]){
            arr1[i]=arr1[k];
            i--;
            k--;
        }
        else{
            arr1[k]=arr2[j];
            k--;
            j--;
        }
    }

      if(i==0){
        while(j!=0){
            arr1[k]=arr2[j];
            k--;
            j--;
        }
      }

      if(j==0){
        while(i!=0){
            arr1[k]=arr1[i];
            i--;
            k--;
        }
      }

      for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
      }
    
    }
