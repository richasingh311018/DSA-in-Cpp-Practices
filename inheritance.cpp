#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe() {
        cout<<"breathe\n";
    
    }

};
class fish : public animal{
    public:
    int fins;
    void swim(){
        cout<<"swim\n";
    }
};

//it is a single inheritance