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
 int max=-1;
 int idx=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
           sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            idx=i+1;
        }
        
         cout<<"row number :"<<idx<<"   "<<"sum is: "<<sum<<" "<<endl;
       
    }
   cout<<endl<<endl;
   cout<<"max is: "<<max<<endl;
   cout<<"Row with max Sum is: "<<idx<<endl;

    
}