#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key)
          return mid;
        else if(arr[mid]<key)
           start=mid+1;
        else
           end=mid-1;
    }
    
     }
