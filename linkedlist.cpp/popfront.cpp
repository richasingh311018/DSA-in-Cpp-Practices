#include<Iostream>
using namespace std;
class Node{
    Node*next;
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
};
void pop_front(){
    if(head==NULL){
        cout<<linkedlist is empty;
    }
Node*temp=head;
head=head->next;

temp->next=NULL;
delete temp;
}