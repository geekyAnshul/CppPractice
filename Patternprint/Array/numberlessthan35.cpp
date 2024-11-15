#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the Number of Childrens: ";
    cin>>n;
     int arr[n];

     cout<<"Enter the Marks of Childrens:  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<35){
            cout<<"Roll number "<< i+1 << " have failed the exam....";
            cout<<endl;
            sum++;
        } 
    }
    cout<<"Total students failed: " << sum << endl;
}