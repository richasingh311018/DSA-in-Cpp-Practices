#include<iostream>
using namespace std;

class student{
    string name;
    float cgpa;
public:
      void getPercentage(){
        cout<<(cgpa*10);
      }
      //setters
      void setname(string nameval){
        name=nameval;
      }
      void setcgpa(float cgpaval){
        cgpa=cgpaval;
      }
      //getters
      string getname(){
        return name;
      }
      float getcgpa(){
        return cgpa;
      }

    };
    int main(){
        student s1;
        s1.setname("richa singh");
        s1.setcgpa(8.1);
    }