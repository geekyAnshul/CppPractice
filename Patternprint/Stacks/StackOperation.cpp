#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(int val,stack<int>& st){
    stack<int>gt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    st.push(val);
    while(gt.size()>0){
         st.push(gt.top());
         gt.pop();
    }
}

int main(){
    stack<int>st;
    for(int i=1;i<6;i++){
        int x=5*i;
        st.push(x);
        cout<<st.top()<<" ";
    }
    cout<<endl;
   
   pushAtBottom(12,st);
   while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
   }
}