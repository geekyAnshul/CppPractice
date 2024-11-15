#include <iostream>
using namespace std;

int main(){
    int arr[6]={0,10,21,3,42,5};
    int target=3;

    for(int i=0; i<6; i++){
       if(arr[i]>target){
        cout<<arr[i]<<" ";
       }
    }
}