#include<iostream>
using namespace std;

void number(int num,int x){
    cout<<num;
    cout<<endl;
    if(num==x) return;
    number(num+1,x);
}

int main(){
    number(1,10);
}