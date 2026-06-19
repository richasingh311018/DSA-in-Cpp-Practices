#include<iostream>
#include<vector>
using namespace std;

int lastoccur(vector<int>arr,int target,int i){
    if(i==arr.size()){
        return -1;
    }
    int idxfound=lastoccur(arr,target,i+1);
    if(idxfound==-1&&arr[i]==target){
        return i;
    }
    return idxfound;
}

int main(){
    vector<int>arr={1,2,3,3,3,4};
    cout<<lastoccur(arr,0,3)<<endl;
    return 0;
}