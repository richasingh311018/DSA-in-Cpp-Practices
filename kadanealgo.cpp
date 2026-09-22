#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"inputs";
        cin>>arr[i];
    }
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        maxsum=max(maxsum,currentsum);
    }
    if(currentsum<0){
       currentsum=0;
    }
    cout<<maxsum<<endl;

}
