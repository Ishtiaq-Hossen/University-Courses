#include <iostream>

using namespace std;

int main()
{
    char x;

    for ( x = 0; x != -1 ; ){
        cout << "Enter an integer (-1 to Exit): ";
        cin >> x;
    }

    return 0;
}
