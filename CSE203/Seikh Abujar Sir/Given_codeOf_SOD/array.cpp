#include<iostream>
using namespace std;
int main(){
        //row collumn
    int mat[3][3];
    int row=3;
    int col=3;
    /* 
    0 0 0
    0 0 0

    5 10 15
    10 11 12
    20 21 22
     */

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
            
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}