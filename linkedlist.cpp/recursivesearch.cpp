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
    int helper(Node* temp,int key){
        if(temp==NULL){
            return 0;
        }
        if(temp->data==key){
          return 0;
        }
       int idx=helper(temp->next,key);
       if(idx==-1){
        return -1;
       } 
       return idx+1;
    }
    int searchrec(int key){
        return helper(head,key);
    }

};