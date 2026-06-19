#include<iostream>
#include<string>
using namespace std;

int tilingproblem(int n){
    if(n==0||n==1){
        return 1;
    }
    //vertical
   int ans1=tilingproblem(n-1); //2*n-1
//horizontal
   int ans2=tilingproblem(n-2);
//2*n-2
return ans1+ans2;
}
int main(){
    int n=3;
    cout<<tilingproblem(5)<<endl;
    return 0;
}
//most imp ques for faang interview
