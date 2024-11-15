#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    cout<<"enter the sentence:  ";
    string sent;
    getline(cin,sent);

    stringstream sst(sent);
    string temp;
    while(sst>>temp){
        cout<<temp<<endl;
    }
}