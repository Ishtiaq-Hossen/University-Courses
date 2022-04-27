//7
//111
#include<iostream>
using namespace std;

void  printBinary(int n)//7
{
    if(n==0){
        cout<<"0";
        return;
    }
    if(n==1)
    {
        cout<<n;
        return;
    }
    if (n<0){
        n=n*-1;
        cout<<"-";
    }
     if(n>0) {
         //n=3
         //n=1.5
      printBinary(n/2);
        cout<<n%2;
    }

}
int main(){
    printBinary(-43);
    return 0;
}