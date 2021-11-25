#include <iostream>

using namespace std;

int main()
{
   float x,k;
   int y;

    cout<<"Enter the number: ";
    cin>>k;
    x=k;
    y=x;
    x=x-y;


    if (x==0){
    cout<<k<<" is integer";
    }


    if(x!=0){
    cout<<k<<" is floating point";
    }


    return 0;
}
