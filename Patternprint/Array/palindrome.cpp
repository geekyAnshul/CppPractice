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
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
           i++;
           j--;
       }
       else if(arr[i]!=arr[j]){
          flag=false;
          break;
       }
    }
    if(flag==true){
        cout<<"palindrome hai";
    }
    else{
        cout<<"not palindrome";
    }
}