#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout<<"enter the string : ";
    getline(cin,s);

    string temp=s;
    reverse(temp.begin(), temp.end());
    s=s+" "+temp;
    cout<<s;
}