#include<Iostream>
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

Node*slow=head;
Node*fast=head;
while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        cout<<"cycle exist";
        return true;
    }
}
cout<<"cycle doesn't exist";
return false;
};