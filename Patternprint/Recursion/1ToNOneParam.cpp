#include<iostream>
using namespace std;

void goat(int x){
    if(x==0) return;
    goat(x-1);
    cout<<x<<endl;
    
}

int main(){
    goat(5);
}