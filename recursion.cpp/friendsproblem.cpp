#include<iostream>
#include<string>
using namespace std;

int friendpair(int n){
    if(n==1||n==2){
        return n;
    }
    //single
    int frnd1=friendpair(n-1);
    //pair
    int frnd2=friendpair(n-2);
    return frnd1+(n-1)*frnd2;
}
int main(){
 cout<<friendpair(3)<<endl;
    return 0;
}

