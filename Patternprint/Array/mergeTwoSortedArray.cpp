#include <iostream>
using namespace std;

int main(){
    int arr1[4]={1,3,5,8};
    int arr2[6]={2,3,4,7,8,9};
    int arr3[10];

    int n=10;

    int i=0;
    int j=0;
    int k=0;

    while(i<4 && j<6){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    if(i==4){
        while(j<6){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    else if(j==6){
        while(i<4){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
    }

    for(int m=0;m<n;m++){
        cout<<arr3[m]<<" ";
    }
}