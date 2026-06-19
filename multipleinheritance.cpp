#include<iostream>
#include<string>
using namespace std;

class teacher{
    public:
    int salary;
    string subject;
};
class student{
    public:
    int rollno;
    float cgpa;
};
class ta:public teacher,public student{
 public:
 string name;
};
int main(){
    ta ta1;
    ta1.name="richa singh";
    ta1.subject="c";
    ta1.cgpa=8.3;

    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
}