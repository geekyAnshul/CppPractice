#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={{0,0,0,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}};
    int n=4;
    for(int i=0;i<n;i++){
        int count=0;
        int low=0;
        int high=n-1;
        int firstidx=-1;
        int maxcount=0;
        int row=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[i][mid]==1){
                if(mid==0){
                firstidx=mid;
                   break;
                }
                if(arr[i][mid-1]!=1){
                   firstidx=mid;
                   break;
                }
                else{
                    high=mid-1;
                }
            }
            else if(arr[i][mid]<1) low=mid+1;
            else high=mid-1;
         }
       if(firstidx!=-1){
           count=n-firstidx;
       }
       if(count>maxcount){
         maxcount = count;
         row=i;
       }

       cout<<maxcount<<endl;
       
    }

    
}