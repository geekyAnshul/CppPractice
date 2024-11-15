#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);
    v.push_back(9);
    v.push_back(22);
    v.push_back(14);
    v.push_back(5);
    v.push_back(9);

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}