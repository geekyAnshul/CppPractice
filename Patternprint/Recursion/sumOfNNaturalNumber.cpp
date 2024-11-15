#include<iostream>
using namespace std;

int sums(int sum,int n){
    if(n==0) return sum;
    return sums(sum+n,n-1);
}

int main(){
    cout<<sums(0,10);
}