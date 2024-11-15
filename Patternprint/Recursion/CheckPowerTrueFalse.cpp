#include<iostream>
using namespace std;

int power(int x){
    if(x==1) return true;
    if(x%2!=0) return false;
    return power(x/2);
}

int main(){
    cout<<power(20);
}