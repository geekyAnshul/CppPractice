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
    bool flag=true;
    for(int i=0;i<n;i++){
       // for(int j=i+1;j<n;j++){
            if(arr[i]>arr[i+1]){
                flag=false;
                
            }
        
    }
    if(flag==false) cout<<"not sorted"<<endl;
    else cout<<"sorted"<<endl;
}