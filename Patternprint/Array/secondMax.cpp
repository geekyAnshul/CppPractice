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
    int max=arr[0];
    int ssmax=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            ssmax=max;
            max=arr[i];
        }
        else if(arr[i]>ssmax && arr[i]!=max){
            ssmax=arr[i];
        }

    }
    cout<<"maximum is "<<max<<endl;
    cout<<"second maximum is "<<ssmax;
}