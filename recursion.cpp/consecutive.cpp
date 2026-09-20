#include<iostream>
#include<string>
using namespace std;

void binarystr(int n,int lastplace,int ans){
    if(n==0){
        cout<<ans<<endl;
        return ;
    }
    if(lastplace!=1){
        binarystr(n-1,0,ans+'0');
        binarystr(n-1,1,ans+'1');
    }else{
        binarystr(n-1,0,ans+'0');
    }
}
int main(){
    string ans="";
    binarystr(4,0);
    return 0;
}
