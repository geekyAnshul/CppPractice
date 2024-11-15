#include<iostream>
using namespace std;

int sumo(int a,int b,int sum){
   if(a>b) return sum;
   if(a==b){
     sum=sum+a;
     return sum;
   }
   if(a%2!=0){
    sum=sum+a;
    sumo(a+2,b,sum);
   }
   else sumo(a+1,b,sum);

}
int main(){
  cout<<sumo(2,10,0);
}