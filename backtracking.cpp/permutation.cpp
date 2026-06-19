#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutation(string str,int ans){
    for(int i=0;i<str.size();i++){
        char ch=str[i];
    string strans=str.substr(0,i)+str.substr(i+1,str.size()-i+1);    
    permutation(strans,ans+ch);
   }
}
int main(){
   void permutation(string str,int ans);
    return 0;
}