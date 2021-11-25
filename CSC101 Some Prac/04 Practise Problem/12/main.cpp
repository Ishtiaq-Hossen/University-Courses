#include <iostream>

using namespace std;

int main()

{
    int x,a;
    a=0;
    cout<<"Enter  the number : ";
    cin>>x;

    if(x<0)
    {
    x=x * -1;
    }
    else if(x==0)
    {
    x=1;
    }
    while(x>0)
    {
    x=x/10;
    a++;
    }
    cout<<"\nNumber of digits: "<<a;










    return 0;
}
