//DESTINATION FAANG
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;

    char max='!', max2='!';
    for(int i=0;i<s.size();i++){
        if(s[i]>max){
            max2=max;
            max=s[i];
        }
        else if(s[i]>max2 and s[i]!=max) max2=s[i];
    }

    if(max2=='!') cout<<"no second max found"<<endl;
    else{
        cout<<"maximum is "<<max<<endl;
         cout<<"second max: "<<max2<<endl;
    }

}