#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
            v[k]=a[i];
            i++;
            k++;
        }
        else{
            v[k]=b[j];
            j++;
            k++;
        }
    }

    if(j==b.size()){
        while(i<a.size()){
            v[k]=a[i];
            i++;
            k++;
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            v[k]=b[j];
            j++;
            k++;
        }
    }
}

void mergeSort(vector<int>&v){
    //int n=sizeof(arr)/sizeof(arr[0]);
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1);
    vector<int>b(n2);

    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }

    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
}

int main(){
    // vector<int>arr;
    // arr.push_back(5);
    // arr.push_back(51);
    // arr.push_back(15);
    // arr.push_back(53);
    // arr.push_back(56);
    // arr.push_back(45);
    // int n=arr.size();
   int arr[]={4,5,9,10,1000,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    mergeSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}