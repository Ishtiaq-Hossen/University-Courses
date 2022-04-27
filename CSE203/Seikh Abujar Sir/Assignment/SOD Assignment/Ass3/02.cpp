//--------Bismillahir Rahmanir Rahim----------/
/**--------------------
[
    Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. 
    There are also two integer pointers named ptrA and ptrB. 
    Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
]
-----------------------**/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int *ptrA,*ptrB;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    ptrA=&a;ptrB=&b;
    cout<<"Output: "<<*ptrA<<" "<<*ptrB<<endl;

    return 0;
}
/**--------------------
[
    test cases
    Input: 15 20
    Output: 15 20
]
-----------------------**/