#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;


class Node{
public:
    int val;
    Node* right;
    Node* left;

    Node(int val){
       this->val = val;
       this->right = NULL;
       this->left = NULL;
    }
};


 void display(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
}

  int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->right)+ sum(root->left);
    }

    int maxi(Node* root){
     if(root==NULL) return 0;
     //return maxi(root->val, max(root->right, root->left));
     int leftmax=maxi(root->left);
     int rightmax=maxi(root->right);
     return max(root->val,max(leftmax,rightmax));
    }

    int levels(Node* root){
        if(root==NULL) return 0;
        return (1 + max(levels(root->right),levels(root->left)));
    } 

    

    void nlevels(Node* root,int currL,int level){
      if(root==NULL) return;
      if(currL==level) cout<<root->val<<" ";
      nlevels(root->left,currL+1,level);
      nlevels(root->right,currL+1,level);
   }

   void allLevels(Node* root){
      int n=levels(root);
      for(int i=1;i<=n;i++){
        nlevels(root,1,i);
        //cout<<root->val<<" ";
      }
   }

   
int main(){
  Node* a=new Node(10);
  Node* b=new Node(20);
  Node* c=new Node(30);
  Node* d=new Node(40);
  Node* e=new Node(50);
  Node* f=new Node(60);

  a->left=b;
  a->right=c;
  b->left=d;
  b->right=e;
  c->left=f;
  c->right=NULL;
  d->left=NULL;
  d->right=NULL;
  e->left=NULL;
  e->right=NULL;
  f->left=NULL;
  f->right=NULL;
  display(a);
  cout<<endl;
  cout<<"Sum of all root nodes is : "<<sum(a)<<endl;
  cout<<"Maximum of all root nodes is : "<<maxi(a)<<endl;
  cout<<"Total Levels in Binary Tree : "<<levels(a)<<endl;
  nlevels(a,1,2);
  cout<<endl;
  allLevels(a);







}