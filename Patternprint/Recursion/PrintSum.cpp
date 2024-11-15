#include<iostream>
using namespace std;

int printSum(int i,int n,int &sum){
    if(i>n) return 0;
    if(i%2!=0){
        sum=sum+i;
        printSum(i+2,n,sum);
    }
    else{
        printSum(i+1,n,sum);
    }
    return sum;
}
int main(){
    int sum=0;
    cout<<printSum(3,18,sum);
}
