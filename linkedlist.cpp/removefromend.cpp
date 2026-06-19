include<iostream>
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

    }int size(){
        int sz=0;
        Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void removenth(int n){
        Node* prev=head;
        for(int i=0;i<size-n r
    }
};