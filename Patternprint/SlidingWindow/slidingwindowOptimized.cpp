// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={5,4,7,1,3,4,5,7,6,9,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     int prevsum=0;
//     int maxsum=0;
//     for(int i=0;i<k;i++){
//        prevsum=prevsum+arr[i];
//     }

//     int currsum=0;
//      maxsum=prevsum;
//     int i=1;
//     int j=k;
//     while(j<n){
//         currsum=prevsum+arr[j]-arr[i-1];
//         if(maxsum<currsum){
//             maxsum=currsum;
//         }
//         prevsum=currsum;
//         i++;
//         j++;
//     }
//     cout<<maxsum; 
// }
#include<iostream>
using namespace std;

int main(){
int arr[]={5,3,9,7,8,0,6,5,4,3,2,6,9,9,9};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
 int maxsum=0;
 int prevsum=0;
for(int i=0;i<k;i++){
   prevsum=prevsum+arr[i];
}
maxsum=prevsum;
int currsum=0;
int i=1;
int j=k;
int maxidx=-1;
while(j<n){
    currsum=prevsum+arr[j]-arr[i-1];
    //maxsum=max(prevsum,currsum);
    if(maxsum<currsum){
        maxsum=currsum;
        maxidx=i;
    }
    prevsum=currsum;
    i++;
    j++;
 }

cout<<"we get maximum " <<maxsum<<" at the sliding window's index of "<<maxidx+1;

}



























