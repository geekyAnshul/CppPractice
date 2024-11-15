#include<iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1) return 1;
    int ans = x*fact(x-1);
    return ans;
}

int main(){
    int n;
    cout<<"enter the number whose factorial you want to find: ";
    cin>>n;
    int ans=fact(n);
    cout<<"The factorial of "<<n<<" is "<< ans;
}