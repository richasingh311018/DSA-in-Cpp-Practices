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
    void removecycle(Node*head){
        //detect cycle
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
    }

};