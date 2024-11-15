#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v;

    vector<int> v1;
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(8);
    v1.push_back(5);
    v1.push_back(8);

    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(9);
    v2.push_back(1);
    v2.push_back(0);

    vector<int> v3;
    v3.push_back(31);
    v3.push_back(32);
    v3.push_back(33);
    v3.push_back(31);
    v3.push_back(30);
    //v3.push_back(38);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    int m=v.size();
    int n=v[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}