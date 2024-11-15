#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r;
    cout<<"enter number of rows: ";
    cin>>r;

    int c;
    cout<<"enter number of columns: ";
    cin>>c;
    

    int d;
    cout<<"enter the value that you want in whole 2D Vector by Default: ";
    cin>>d;
    vector<vector<int>>v(r,vector<int>(c,d));
    int m=v.size();
    int n=v[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}