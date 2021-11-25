#include <iostream>

using namespace std;

int main()
{
    int i,y;
    float x, fac;

    cout <<"Enter the value of x = ";
    cin >> x;
    cout << "Enter the value of y = ";
    cin >> y;

    fac = 1;
    for(i = 1 ; i <= y ; i = i +1){
        fac = fac * x;
    }
    cout << x << "^" << y << " = " << fac;

    return 0;
}
