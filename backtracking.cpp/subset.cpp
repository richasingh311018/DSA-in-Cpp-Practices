#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printsubset(string str,string subset){
    char ch=str[0];

    printsubset(str.substr(1,str.size()-1),subset+ch); //for yes

    printsubset(str.substr(1,str.size()-1),subset);  // for no
}

int main(){
    string str="abc";
    string subset=" ";
    printsubset(str,subset);
    return 0;
}