#include <iostream>

using namespace std;

int main()
{
    int i,f1,f2,f3, x, isFibonacchi;

    cout << "Enter a number: ";
    cin >>x;
    f1 = 0;
    f2 = 1;

    isFibonacchi = 0;
    for(i = 3; i<x ; i = i +1){
        f3 = f2 + f1;
        if (f3==x){
            isFibonacchi = 1;
            break;
        }
        f1 = f2;
        f2 = f3;
    }

    if (isFibonacchi == 1){
        cout << i<<"th term of the fibnacchi serise";
    }
    else{
        cout <<"Not a fibonacchi number";
    }


    return 0;
}
