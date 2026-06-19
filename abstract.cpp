#include<iostream>
#include<string>
using namespace std;
//abstract class
class shape{
    public:
     virtual void draw()=0;//pur virtual function
};
 class circle:public shape{
    void draw(){
        cout<<"draw circle";
    }
 };
 class square :public shape{
    void draw(){
    cout<<"draw square";
    }
 };
 int main(){
    circle c1;
    c1.draw();

    square sq1;
    sq1.draw();
    return 0;

 }