#include<iostream>
#include<string>
using namespace std;

void removeduplicates(string str,string ans,int i,int map[26]){
    if(i==str.size()){
        cout<<ans;
        return ;
    }
    char ch=str[i];
    int mapidx=(int)(ch-'a');

    if(map[mapidx]==true){

    removeduplicates(str,ans,i+1,map);
      }
 else{
    removeduplicates(str,ans+str[i],i+1,map);
    }
}

int main(){
string str="aappnacollege";
string ans="";
int map[26]={false};
removeduplicates(str,ans,0,map);


}
