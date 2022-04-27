#include<iostream>
using namespace std;

int main(){
    // special data type
    // can store address
    // can be reused
    // 8bytes
    int *p;// 4 bytes
    float *q;// 4 bytes
    double *r;// 8 bytes
    //pointer p;
    //memory space
    //int float = 4bytes
    //char = 1byte
    //double = 8 bytes
    int x=10;
    p=&x;
    /* cout<<&x<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<x<<" "<<*p<<endl; */
    int **p1=&p;
    //p1=&p;
    int ***p2;
    p2=&p1;
    cout<<&p2<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;
    cout<<***p2<<endl;
    //de referencing
    return 0;
}