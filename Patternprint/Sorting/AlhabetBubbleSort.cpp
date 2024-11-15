#include <iostream>
using namespace std;

int main(){
    string str = "BABYZZXYYXXYXHAPOZYZ";
    int n= str.size();
    string ans="";
    for(int i=0; i<n; i++){
        if(str[i]>'X'){
            ans+=str[i];
        }
    }
   cout<<ans<<endl;
   int m =ans.size();
    for(int i=0;i<m-1-i;i++){
        for(int j=0;j<m-1;j++){
            if(ans[j]>ans[j+1]){
                swap(ans[j],ans[j+1]);
            }
        }
    }
    cout<<ans<<endl;
}