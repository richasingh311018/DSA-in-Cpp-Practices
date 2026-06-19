#include<iostream>
using namespace std;
class Node{
    Node*next;   //cycle/loop in linkedlist
    int data;
     public:
     Node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    Node*head=NULL;
    Node*tail=NULL;

    Node*merge(Node*left,Node*right){
    list ans;
    Node* i=left;
    Node* j=right;
    while(i!=NULL&j!=NULL){
        if(i->data<=j->data){
        ans.push_back(i->data);
        i=i->next;
    }
    else{
        ans.push_back(j->data);
        }
    }
    
};