#include<iostream>
using namespace std;
int main(){
    int *x;
    int mysize;
    cin>>mysize;
    x=new int[mysize];

    

    return 0;
}


/* 

int *x;// |4b|
    int n;//10
    cin>>n;
    x=new int[n];//4*10=40
    
    cout<<x<<" "<<&x<<" "<<*x<<endl;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
 */