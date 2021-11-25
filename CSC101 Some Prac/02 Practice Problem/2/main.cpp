#include <iostream>

using namespace std;

int main()
{
    float a,l,w,p;

    cout<<"Enter the lenth:";
    cin>>l;

    cout<<"Enter the Width:";
    cin>>w;

    a=l*w;
    p=2*a;

    cout <<"Area is "<< a << endl;
    cout<<"Perimeter is "<<p;
    return 0;
}
