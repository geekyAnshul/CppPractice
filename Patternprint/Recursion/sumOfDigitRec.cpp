#include<iostream>
using namespace std;

int sum(int n){
    if(n>=0 && n<10) return n;
    int digit=n%10;
    return digit+sum(n/10);
}

int main(){
    int n;
    cout<<"enter the number which digit you want to count: ";
    cin>>n;
    cout<<"sum of digits will be: "<<sum(n);
}