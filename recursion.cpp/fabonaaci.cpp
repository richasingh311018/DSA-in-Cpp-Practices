#include<iostream>
using namespace std;

int fabonacci(int n){
    if(n==0||n==1){
        return n;
    }
    return fabonacci(n-1)+fabonacci(n-2);
}
int main(){
    cout<<fabonacci(6)<<endl;
    return 0;
}