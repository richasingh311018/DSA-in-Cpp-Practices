#include<iostream>
#include<string>
#include<vector>
using namespace std;

int grid(int row,int column,int n,int m){
     if(row==n-1&&column==m-1){
        return 1;
     }
     if(column>=m||row>=n){
        return 0;
     }

    //right
    int val1=grid(row,column+1,n,m);
    //down
    int val2=grid(row+1,column,n,m);
    return v1+v2;
}
