#include <iostream>

using namespace std;

int main()
{
    float F,C,K;
    cout << "Enter the temperature in Fahrenheit:";
    cin>>F;

    C=((F-32)/9)*5;
    K=C+273;

    cout<<"Here is the temperature in Celsius:"<<C<<endl;
    cout<<"Here is the temperature in Kelvin:"<<K<<endl;
    return 0;
}
