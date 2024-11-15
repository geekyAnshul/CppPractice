#include<iostream>
#include<string>
#include<algorithm>
// #include "../../../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
using namespace std;

int main(){
    cout<<"enter the S sstring: ";
    string s;
    getline(cin,s);

    cout<<"enter the T string: ";
    string t;
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    //LOOPS LAGAKR BADI MEHNAT SE.......
    // int n=s.size();
   

    //  bool flag=true;
    
    // for(int i=0;i<n;i++){
    //     if(s[i]!=t[i]){
    //        flag=false;
    //        break;
    //     }
    // }
    // if(flag==true) cout<<"anagram hai";
    // else cout<<"not anagram";
   // REAL ME ESE BHI SOLVE HO SKTA THA ....
    if(s==t) cout<<"anagram";
    else cout<<"not anagram";
    
    

}
// }
