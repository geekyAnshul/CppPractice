#include<iostream>
using namespace std;
// void print(int n,int i){
//     if(i>n) return;
//     cout<<i<<" ";
//     print(n,i+1);
//     if(i>1) cout<<i-1<<" ";
    
// }

void print(int n,int i){
  if(i>n){
     if(n==0) return;
     cout<<n<<" ";
     print(n-1,i);
  }
  cout<<i<<" ";
  print(n,i+1);
}

int main(){
    print(5,1);
}