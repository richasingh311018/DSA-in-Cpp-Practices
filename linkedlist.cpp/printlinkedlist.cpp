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
void print(int data){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp<<"->";
        temp=temp->next;
    }
};