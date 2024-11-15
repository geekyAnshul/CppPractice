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
    int sum=0;
    for(int i=0;i<n;i++){
      sum=sum+arr[i];
    }
    cout<<"Total Sum of array is "<<sum<<endl;
}