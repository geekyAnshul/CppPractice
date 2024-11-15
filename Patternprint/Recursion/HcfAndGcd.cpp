#include<iostream>
using namespace std;
//RECURSIVE SOLUTION
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
//ITERATIVE SOLUTION
int hcf(int a,int b){
    for(int i=min(a,b);i>=0;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}

int main(){
    cout<<hcf(24,36);

}