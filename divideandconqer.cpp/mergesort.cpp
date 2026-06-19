#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int si,int mid,int ei){
    vector<int>temp;
    int i=si;
    int j=mid+1;
    while(i<=mid&&j<=ei){
      if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
      }
      else{
        temp.push_back(arr[j]);
      }
    }
    while(i<=mid){
      temp.push_back(arr[i++]);
    }
    while(j<=ei){
      temp.push_back(arr[j++]);
    }
    //vector temp copy
    for(int idx=si,x=0;idx<=ei;idx++)
  {
     arr[idx]=temp[x++];
  }
}

 void mergesort(int arr,int si,int ei){
      if(si>=ei){
        return;
      }
    int mid=(si+ei)/2;//si+(ei-si)/2 so that didn't face data overflow problem
    mergesort(arr,si,mid);//left half
    mergesort(arr,mid+1,ei);//right half
    merge(arr[],si,mid,ei);
}
int main(){
    int arr[6]={6,3,4,7,2,5};
    int n=6;
    mergesort(arr,0,n-1);
    return 0;
}
