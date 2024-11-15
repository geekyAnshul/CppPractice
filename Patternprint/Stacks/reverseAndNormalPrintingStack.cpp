#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;

    for(int i=1;i<=5;i++){
        int x=10*i;
         st.push(x);
         cout<<st.top()<<" ";
    }
     cout<<endl;

    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;

   cout<<"revrse hogya: ";
    stack<int>gt;

    while(st.size()>0){
        cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
    }

    cout<<endl;

    cout<<"Normal print: ";
  
  stack<int>temp;
  while(st.size()>0){
    temp.push(st.top());
    st.pop();
  }
  while(temp.size()>0){
    cout<<temp.top()<<" ";
    st.push(temp.top());
    temp.pop();

  }


}