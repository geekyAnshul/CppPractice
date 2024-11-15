#include<iostream>
using namespace std;

class Node{
public:
     int val;
     Node* next;

     Node(int val){
      this->val=val;
      this->next=NULL;
     }
};

class LinkedList{
public: 
   Node* head;
   Node* tail;

   

  void InsertAtIdx(int idx,int val){
    Node* temp=head;
    Node* f=new Node(val);
    for(int i=1;i<idx;i++){
        temp=temp->next;
    }
    temp->next=f;
    f->next=temp->next;
    
  }

  void display(Node* head){
     Node* temp=head;
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
  }
};


int main(){
    LinkedList ll;
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(40);
    Node* d=new Node(70);
    Node* e=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    ll.display(a);
    ll.InsertAtIdx(4,50);
    ll.display(a);
}