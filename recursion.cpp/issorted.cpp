#include<iostream>
using namespace std;

bool issorted(int arr[],int n,int i){
    if(i==n-1){
        return ;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    issorted(arr,n,i+1);
}
int main(){
    int arr1[5]={1,3,3,4,5};
    issorted(arr1,5,0);
}