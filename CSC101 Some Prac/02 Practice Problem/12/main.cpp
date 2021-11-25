#include <iostream>

using namespace std;

int main()
{
    float x;
    int y;

    cout << "Enter a Decimal value: ";
    cin >> x;

    y = x;
    x = x - y;

    cout << "Integer part = " << y << " and ";
    cout << "Decimal part = " << x;

    return 0;
}
