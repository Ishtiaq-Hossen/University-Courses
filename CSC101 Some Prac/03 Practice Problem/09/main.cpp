#include <iostream>

using namespace std;

int main()
{
    float x;

    cout << "Enter your total number: " ;
    cin >> x;

    if (x >= 85){
            cout << x << " = A";
    }
    else if (x >= 80){
            cout << x << " = A-";
    }
    else if (x >= 75){
            cout << x << " = B+";
    }
    else if (x >= 70){
            cout << x << " = B";
    }
    else if (x >= 65){
            cout << x << " = B-";
    }
    else if (x >= 60){
            cout << x << " = C+";
    }
    else if (x >= 55){
            cout << x << " = C";
    }
    else if (x >= 50){
            cout << x << " = C-";
    }
    else if (x >= 45){
            cout << x << " = D+";
    }
    else if (x >= 40){
            cout << x << " = D";
    }
    else {
            cout << x << " = F";
    }

    return 0;
}
