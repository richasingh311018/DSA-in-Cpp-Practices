#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
     int start=0,end=n-1;
      while(start<end){
    swap(array[start],array[end]);
        start++;
        end--;
    }
        for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
        }
      }
