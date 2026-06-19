#include<iostream>
using namespace std;

class user{
   string id;
   int password;

   public:
   string username;

 user(int id){
    this->id=id;
 }

//getter
string getPassword(){
    return password;
}
//setter 
void setPassword(string password){
    this->password=password;
}
};