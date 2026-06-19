#include<iostream>
#include<string>
using namespace std;

class animal{
    void eat(){
        cout<<"eat";
    }
    void breathe(){
        cout<<"breathe";
    }
};
class mammal:public animal{
    void bloodgrp(){
        cout<<"warm";
    }
};
class dog:public mammal{
    void tailwag(){
    cout<<"tailwag";
    }
};
int main(){
    dog d1;
    d1.eat();
    d1.breathe();
    retrun 0;
}