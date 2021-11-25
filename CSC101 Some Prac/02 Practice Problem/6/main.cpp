#include <iostream>

using namespace std;

int main()
{
    int y,m,d;
    cout << "Enter the value= ";
    cin>>d;
    cout<<"days= "<<d<<endl;

    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    cout<<y <<" years "<<m <<" month "<<d <<" days ";


    return 0;
}
