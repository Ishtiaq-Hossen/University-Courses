#include <iostream>

using namespace std;

int main()
{
    int x,i,isPrime;

    cout <<"Enter the value of x = ";
    cin >> x;

    isPrime = 1; // assuming x is a prime number
    for (i = 2; i < x; i = i + 1){
        if(x % i == 0){
           isPrime = 0;
           break;
        }
    }

    if (isPrime == 1){
        cout << x << " is Prime";
    }
    else{
        cout << x <<" is NOT Prime";
    }

    return 0;
}
