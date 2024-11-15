#include<iostream>
#include<algorithm>
using namespace std;

void repeat(int n){
    if(n==0) return;
    cout<<"Hello Bhai...\n";
    repeat(n-1);
}

int main(){
     repeat(5);
}