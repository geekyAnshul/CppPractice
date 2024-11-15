#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int m;
    cout<<"enter the size of array: ";
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<m-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
    }
}
 if(flag==true) cout<<"Yupppp....The Array you entered was sorted."<<endl;
 else cout<<"Try again,Array that you entered was not sorted."<<endl;
}