#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             int d = 64+j;
//             char ch= (char)d;
//             cout<<ch;
//     }
//     cout<<endl;
// }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<(char)(j+64)<<" ";
    }
    cout<<endl;
  }
}