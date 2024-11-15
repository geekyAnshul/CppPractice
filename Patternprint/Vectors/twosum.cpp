#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"enter the elements now: ";
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"your array is : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";;
    }
    int tar;
    cout<<"enter the targetted element: ";
    cin>>tar;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==tar){
                cout<<v[i]<<" "<<v[j]<<endl;
        }
    }
}
}