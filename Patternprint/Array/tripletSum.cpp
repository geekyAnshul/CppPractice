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
   int x;
   cout<<"enter the targetted elements: ";
   cin>>x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                  if(arr[i]+arr[j]+arr[k]==x){
                        cout<<"triplets are: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                  }
            }
    }
}
}