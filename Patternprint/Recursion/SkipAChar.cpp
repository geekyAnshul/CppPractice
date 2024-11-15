#include<iostream>
#include<vector>
using namespace std;

void skip(vector<int>& v, vector<int>&ans,int idx) {
    if(idx==v.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
    }
   int first = v[idx];
   if(first==2) return skip(v,ans,idx+1);
   else{
    ans.push_back(first);
    return skip(v,ans,idx+1);
   }

}

int main(){
    //int arr[] = {1,2,3,1,4,1,3,5,1};
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    vector<int>ans;

    skip(v,ans,0);

}