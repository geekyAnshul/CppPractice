#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={19,12,23,8,16};
    int n=5;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
    vector<int>v(n,0);

    int x=0;
    for(int i=0;i<n;i++){
        int minidx=-1;
        int mini=INT_MAX;
        
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<mini){
                    mini=arr[j];
                    minidx=j;
                }
                  
            }
        }
        v[minidx]=1;
        arr[minidx]=x;
        x++;
     }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}