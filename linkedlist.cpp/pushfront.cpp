#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val){
        data= val;
        next=NULL;

    }

};
class list{
    Node*head;
    Node*tail;
    list(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        //Node* newNode(val);//static we only access in local function that's why we use *new*

        //push function se bahar aane pr we did not access 
    if(head==NULL){
        head=tail=newNode;

    }else{
        newNode->next=head;
        head=newNode;
    }

    }
    void push_back(int val){
        Node* newNode=new Node(val);
       if(head==NULL){
        head=tail=newNode;
       } else{
        tail->next=newNode;
        tail=newNode;
       }
    }
    
};
int main(){
    list l1();
    l1.push_front(3);
    l1.push_front(2);
      
}