#include<iostream>
using namespace std;

class car{
    string color;
    string name;

 public:
 car(string name,string color){
    cout<<"constructor is called,object being created:";
    this->name=name;
    this->color=color;
 }
};