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
    int num;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                flag=true;
                num=arr[i];
            }
        }
    }

    if(flag==false) cout<<"No Duplicates found!"<<endl;
    else cout<<"Duplicates are present, "<<num<<" is that duplicate element....";
}
