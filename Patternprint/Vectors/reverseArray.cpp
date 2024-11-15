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
        cout<<v[i]<<" "<<endl;
    }

    int m=0;
    int q=v.size()-1;
    while(m<=n){
        int temp=v[m];
        v[m]=v[q];
        v[q]=temp;
        m++;
        q--;
    
}
for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
  }

}