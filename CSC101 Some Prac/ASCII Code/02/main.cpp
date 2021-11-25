#include <iostream>

using namespace std;

int main()
{
    char c;
    int x;

    cout << "Enter an integer (<256): " ;
    cin >> x;

    c = x;

    cout << "You entered: " << c;

    return 0;
}
