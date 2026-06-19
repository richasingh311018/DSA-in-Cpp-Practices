#include<iostream>
#include<string>
using namespace std;

class a{
    string secret="secret data";
    //friend function
    friend class b;
    //friend class
    friend void revealsecret(a &obj);
};
class b{
    public:
    void showsecret(a &obj){
    cout<<obj.secret<<endl;
    }
};
void revealsecret(a&obj){
    cout<<obj.secret<<endl;
}
int main(){
    a a1;
    b b1;

    b1.showsecret(a1);
}