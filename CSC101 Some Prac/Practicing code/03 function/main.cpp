#include <iostream>

using namespace std;
int Factorial(int );
int main()
{
    int x;
    cin>>x;
    Factorial(x);
    return 0;
}
int Factorial(int x)
{
    int fact = 1;
    for(int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    cout<<fact;
    return fact;
}
