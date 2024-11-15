#include <iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the size of Arrays: ";
    cin>>n;
   int arr[n];
   cout<<"Enter the element number:  ";
    for(int i=0;i<n;i++){
       // int a=i+1;
        cin>>arr[i];
    }
    cout<<"your array was: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int sumOdd=0;
    int sumEven=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
           sumEven=sumEven+arr[i];
        }
        else{
            sumOdd=sumOdd+arr[i];
        }
    }
    cout<<"sumEven: "<<sumEven<<endl;
    cout<<"sumOdd: "<<sumOdd<<endl;

    int ans=sumEven-sumOdd;
    cout<<"The Difference is: "<<ans<<endl;
}