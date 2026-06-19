#include<iostream>
#include<string>
using namespace std;

class example{
    public:
    example(){
        cout<<"constructor";

    }
    ~example(){
        cout<<"destructor";
    }
};
int main(){
    int a=0;
    if(a==0){
        static example eg1;
    }
    cout<<"code ending";
    return 0;
}
//without static use in object
//output constructor,destructor,code ending
//with static contructor,code ending,destructor