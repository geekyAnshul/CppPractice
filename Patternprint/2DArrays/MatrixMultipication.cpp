#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the number of rows: ";
    cin>>m;

    int n;
    cout<<"enter the number of columns: ";
    cin>>n;
    cout<<"enter elements of the matrix: ";
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int p;
    cout<<"enter the number of rows: ";
    cin>>p;

    int q;
    cout<<"enter the number of columns: ";
    cin>>q;
      cout<<"enter elements of the matrix: ";
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    
    
    if(n==p){
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                 res[i][j]=0;
                for(int k=0;k<p;k++){
                   res[i][j] += arr[i][k] * brr[k][j];
                }
            }
         
     }
     cout<<"Your matrix multiplication answer is: "<<endl;
      for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
          }
         
    }       
    
    else{
        cout<<"matrix hi galat h Bhai....";
    }
   
}