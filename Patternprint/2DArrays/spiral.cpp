#include <iostream>
using namespace std;

int main(){
   int r;
    cout<<"Enter the Number of ROWS: ";
    cin>>r;
    // cout<<endl;
    int c;
    cout<<"Enter the Number of COLUMNS: ";
    cin>>c;
    //cout<<endl;

    int arr[r][c];

    cout<<"Enter the Elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int total=r*c;
    int count=0;

    while(count < total){
        //left to right
        for(int j=minc;j<=maxc && count<total;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;

        for(int i=minr;i<=maxr && count<total;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;

        for(int j=maxc;j>=minc && count<total;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
    }
    maxr--;

    for(int i=maxr;i>=minr && count<total;i--){
        cout<<arr[i][minc]<<" ";
        count++;
    }
    minc++;


}
}