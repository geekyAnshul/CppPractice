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

    int tar;
    cout<<"Enter the target : ";
    cin>>tar;
    bool flag=false;
    
    int idx;
    for(int i=0;i<=n;i++){
        if(arr[i]==tar){
            // cout<<"Target is present at "<< i+1 << endl;
            flag=true;
            idx=i;
        }
    }

    if(flag==true){
        cout<<"Target is present at "<< idx << endl;
      }
    else{
        cout<<"Target is not present";
    }
}