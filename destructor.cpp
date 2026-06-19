#include<iostream>
using namespace std;

class car{
  string name;
  string color;

  //destructor if we create constructor then we should also have to use destructor
  ~car(){
    cout<<"deleting object";
  }
};