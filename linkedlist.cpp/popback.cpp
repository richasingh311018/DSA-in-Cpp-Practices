#include<iostream>
using namespace std;

class Node{
    //create one node 
    int data;  //value or data which is store in one node
    Node*next;  //node pointer which is points to the next node
    public:
    Node(int val){
        data=val;
        next=NULL;
    }
};
    class list{     //collection of nodes
     Node* head;    //as a user we should use list class
     Node* tail;           
    
    public:
    list(){
        head=NULL;
        tail=NULL;
    }

void pop_back(){
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
    }
};