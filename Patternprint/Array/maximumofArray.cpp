#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int arr[5]={0,10,10,7,4};
    int max=arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
    }
   }
     cout<<max<<endl;
     int smax=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
    }
}

cout<<smax<<endl;

}