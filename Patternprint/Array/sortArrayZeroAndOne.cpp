#include <iostream>
using namespace std;

int main(){
    int arr[8]={1,1,0,1,0,1,1,0};

    int n=8;
//     int no0=0;
//     int no1=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0) no0++;
//         else no1++;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         if(i<no0) arr[i]=0;
//         else arr[i]=1;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int i=0;
int j=n-1;

 for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;

while(i<j){
    if(arr[i]==1 && arr[j]==0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    else if(arr[i]==0) i++;
    else if(arr[j]==1) j--;
}
 for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}