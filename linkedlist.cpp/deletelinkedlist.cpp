#include<Iostream>
using namespace std;
 class Node{
    Node*next;
    int data;
    public:
    Node(int val){
        data=val;
        Node*next=NULL;
    }
 
~Node(){
    if(next!=NULL){
     delete next;
     next=NULL;
    }
}
 };
 class List{
    Node*head;
    Node*tail;
    public:
    List(){
     head=NULL;
     tail=NULL;
    }
    ~List(){
if(head!=NULL){
    delete head;
    head=NULL;
 }
    }
};