#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cout<<"enter the number of Rows: ";
    cin>>m;
    cout<<"enter the number of Cols: ";
    cin>>n;
    vector<vector<int>> v(m,vector <int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>v[i][j];
        }
    }

    int rows=v.size();
    int cols=v[0].size();

    int target;
    cout<<"enter the Target: ";
    cin>>target;

    int i=0;
    int j=cols-1;


   bool flag=false;
    while(i<=rows-1 && j>=0){
        if(v[i][j]==target){
           flag=true;
           break;
        }
        else if(v[i][j]<target) i++;
        else j--;
    }

    if(flag==true){
        cout<<"found";
    }
    else {
        cout<<"not found";
    }
}