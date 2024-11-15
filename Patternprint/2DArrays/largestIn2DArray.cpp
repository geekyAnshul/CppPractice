#include <iostream>
using namespace std;

int main(){
    int arr[3][4]={500,4,6,7,3,89,0,1,0002,0,10,121};
    int max=arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0;j<4;j++){
           if(arr[i][j]>max){
            max=arr[i][j];
           }
        }
    }
    cout<<max;
}