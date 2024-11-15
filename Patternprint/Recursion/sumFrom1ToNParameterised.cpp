#include<iostream>
using namespace std;
 
// void findSum(int sum,int n){
//     if(n==0){
//         cout<<sum;
//         return;
//     };
//     findSum(sum+n,n-1);
// }

// int main(){
//     findSum(0,5);
// }
int findSum(int x){
    if(x==0) return 0;
    return x+findSum(x-1);
}
int main(){
    cout<<findSum(5);
}