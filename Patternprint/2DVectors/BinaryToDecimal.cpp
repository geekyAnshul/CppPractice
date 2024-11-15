#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of Arrays: ";
    cin>>n;
   int arr[n];
   cout<<"enter the binary number: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int sum=0;
    int x=1;
    for(int i=n-1;i>=0;i--){
        sum=sum+arr[i]*x;
        x=x*2;
    }
    cout<<endl;
    cout<<"The Decimal value is: "<<sum;


}