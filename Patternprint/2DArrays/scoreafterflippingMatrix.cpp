#include <iostream>
#include <vector>
using namespace std;

//void flip(vector<vector<int>>& v){
    
    
//}

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

    for(int i=0;i<rows;i++){
        if(v[i][0]==0){
        for(int j=0;j<cols;j++){
            if(v[i][j]==0) v[i][j]=1;
            else v[i][j]=0;
          }
        }
    }

    for(int j=0;j<cols;j++){
        int noo=0;
        int noz=0;
        for(int i=0;i<rows;i++){
            if(v[i][j]==0) noz++;
            else noo++;
        }

        if(noz>noo){
            for(int i=0;i<rows;i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    
    }
    int sum=0;
    for(int i=0;i<rows;i++){
        int x=1;
        for(int j=cols-1;j>=0;j--){
            sum=sum+v[i][j]*x;
            x=x*2;
        }
    }
     cout<<"total sum: "<<sum<<endl;



}