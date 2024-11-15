#include<iostream>
using namespace std;

void number(int x){
    if(x==0) return;
    cout<<x;
    cout<<endl;
    number(x-1);
}

int main(){
    int n;
    cout<<"enter the starting of backward counting: ";
    cin>>n;
     number(n);
}