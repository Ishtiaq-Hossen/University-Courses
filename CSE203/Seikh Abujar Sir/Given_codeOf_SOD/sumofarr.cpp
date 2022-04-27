#include<iostream>
using namespace std;
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int sumOfArr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum<<endl;//100
    return sum;
}

int main(){
    int ar[5]={10,15,20,25,30};
    //25+45+30
    //70+30=100
    int sArr=sumOfArr(ar,5);
    int z=sum(sArr,45);
    cout<<"Z = "<<z<<endl;// Z = 5134509 //145
     /* 
     sum = 100
    Z = 145
      */

}