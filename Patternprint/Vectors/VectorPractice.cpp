#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(15);
    v.push_back(9);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


}