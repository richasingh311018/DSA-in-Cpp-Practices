#include<iostream>
using namespace std;

class queue{
    int *arr;

    int capacity;
    int currsize;

    int f,r;
    public:
    queue(int capacity){
        this->capacity=capacity;
        arr=new int(capacity);
        currsize=0;
        f=r=-1;
    }
    void push(int data){
        if(currsize==capacity){
            cout<<"queue is full\n";
            return;
        }

       r=(r+1)%capacity;
       arr[r]=data;
       currsize++;
    }
    void pop(){
        if(empty()){
     cout<<"queue is empty\n";
     return;
        }
        f=(f+1)%capacity;
        currsize--;

    }
    int front(){
      return arr{f};
      
    }
    bool empty(){

    }
};
int main(){
    queue q{4};
    return 0;
}