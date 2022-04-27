#include<iostream>
using namespace std;
void swapValue(int &a,int &b){
    b=40;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<&a<<" "<<&b<<endl;
    cout<<"Inside Func"<<endl;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int num1= 5;// add num3,num2,num1= 0xFD7= |50|
    //sadia  at uni
    //tori at home
    //    y,x |  8  |
     int &num2=num1;
     int &num3=num2;
    num2=50;
    cout<<num1<<endl;
    cout<<num3<<endl; 

    /* int x=10;
    int y=20;
    swapValue(x,y);
    //pass by ref
    cout<<"After Func call"<<endl;
    cout<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y<<endl; */
    return 0;
}