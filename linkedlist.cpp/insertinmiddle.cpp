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
void insert(int val,int pos){
    Node* newNode=new Node(val);
    Node*temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    //temp is now at position-1 i.e prev/left
    newNode->next=temp->next;
    temp->next=newNode;
}
Node*temp;

