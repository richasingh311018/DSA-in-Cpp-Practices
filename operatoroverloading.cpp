#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:
       complex(int r,int i){
          real=r;
          img=i;
       }
       void show(){
        cout<<real<<"+"<<img<<"i";
       }
       //operator overloading
       void operator+(complex &c2){
        int resReal=this->real+c2.real;
        int resImg=this->img+c2.img;
        complex c3(resReal,resImg);
        cout<<"res=";
         c3.show();

       }  
};
    int main(){
        complex c1(3,2);
        complex c2(4,3);

        c1.show();
        c2.show();
        c1+c2;
        return 0;
    }