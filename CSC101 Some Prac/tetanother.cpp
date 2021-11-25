#include<iostream>
#include<conio.h>
using namespace std;
int reverse1(int );
int main()
{
    int num1;
    cout<<"Enter a number : ";
    cin>>num1;

    cout<<reverse1(num1);
    getch();
}
int reverse1(int num)
{
    int reverse=0;
    for(int i=0; num!=0; i++)
    {
        reverse=reverse*10+num%10;
        num=num/10;
    }

    return reverse;
}
