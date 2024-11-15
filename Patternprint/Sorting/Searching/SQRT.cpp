#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    cout<<"enter the number whose square root you want to find: ";
    int n;
    cin>>n;

    int arr[n];
    int low=0;
    int high=n-1;
    bool flag=false;
    int ans;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(n==1) {
            ans=1;
            flag=true;
            break;
        }
        else if(mid*mid==n){
             //cout<<"square root is: ";
             ans=mid;
             flag=true;
             break;
        }
        else if(mid*mid>n) high=mid-1;
        else low=mid+1;
    }
    if(flag==true) cout<<"the square root of "<< n << " is "<<ans;
    else cout<<"perfect sqaure root not found";

}