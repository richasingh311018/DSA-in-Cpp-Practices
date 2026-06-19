#include<iostream>
#include<string>
using namespace std;

class example{
   public:
    static const int x=0;//for intialisation we have to use a const
};
  // int example::x=0; if not intialise in class then use that;
int main(){
    example eg1;
    example eg2;
    example eg3;

    cout<<eg1.x<<endl;
    cout<<eg2.x<<endl;
    cout<<eg3.x<<endl;
    return 0;
}
