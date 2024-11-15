#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string arr[]={"000000000000000000008","6","4","9","8","1"};
    int n=6;
    int maxi=stoi(arr[0]);
    for(int i=0;i<6;i++){
        if(stoi(arr[i])>maxi) maxi=stoi(arr[i]);
    }
    cout<<"the maximum string element is "<<maxi<<endl;
}