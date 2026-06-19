#include<iostream>
using namespace std;
void spiralmatrix(int matrix[][4],int n,int m){
    int sr=0,sc=0;
    int er=n-1,ec=m-1;
    while(sr<=er&&sc<=ec){
    for(int j=sc;j<=sc;j++) {
        cout<<matrix[sr][j]<<" ";
    }
    for(int i=sr+1;i<=er;i++){
        cout<<matrix[i][ec]<<" ";
    }
    for(int j=ec-1;j>=sc;j--){
        cout<<matrix[er][j]<<" ";
    }
    for(int i=er-1;i>=sr+1;i--){
        cout<<matrix[i][sc]<<" ";
    }
    sr++;sc++;
    er--;ec--;
    }

}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{14,15,16,17}};
     spiralmatrix(matrix,4,4);
     return 0;
}