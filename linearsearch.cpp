#include<iostream>
using namespace std;
    int linearsearch(int arr[],int n, int key){
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    int main(){
        int arr[5]={22,33,44,55,66};

        int result= linearsearch( arr, 5, 44);
         if (result!= -1){
         cout<<"key found"<<result;
        }
        else
        cout<<"not found";
        return 0;


    }