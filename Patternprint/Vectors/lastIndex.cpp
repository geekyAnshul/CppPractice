#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    int t;
    cout<<"enter the target element: ";
    cin>>t;

    for(int i=v.size();i>=0;i--){
        if(v[i]==t){
            cout<<"Target Found at " << i <<" index";
        }
    }
    


}
