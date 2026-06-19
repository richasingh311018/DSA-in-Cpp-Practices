#include<iostream>
using namespace std;
//class
class student{
    //properties
   string name;
   float cgpa;

   //methods
   void getPercentage(){
    cout<<(cgpa*10)<<"% /n";
   }
};
int main(){
    student s1; //s1 is object
    cout<<sizeof(s1);
    return 0;
}