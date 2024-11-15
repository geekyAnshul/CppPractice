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
    int j;
    for(int i=0;i<n;i++){
        for( j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                  break; 
            }
            
        }
         if(j==n){
              cout<<arr[i]<<" ";
              break;
    }

    }
   
 }