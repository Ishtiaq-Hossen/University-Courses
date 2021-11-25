#include <iostream>

using namespace std;

int main()
{
    float pi,r,c,a;
    pi=3.1416;
    cout<<"Enter Radius: ";
    cin>>r;

    a=pi*r*r;
    c=2*pi*r;

    cout<<"Area is "<<a<<endl;
    cout<<"Circumfurace is "<<c;
    return 0;
}
