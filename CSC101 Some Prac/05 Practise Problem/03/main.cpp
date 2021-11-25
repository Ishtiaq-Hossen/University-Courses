#include <iostream>

using namespace std;

int main()
{
    int x,y,i;

    cout <<"Enter the value of x = ";
    cin >> x;
    cout << "Enter the value of y = ";
    cin >> y;

    if (x > y){
        x = x + y;
        y = x - y;
        x = x - y;
    }

    for (i = x; i >= 1; i = i - 1){
        if((x % i == 0) && (y % i == 0)){
            cout << "HCF = " << i << endl;
            break; // you can also use i = 1;
        }
    }

    return 0;
}
