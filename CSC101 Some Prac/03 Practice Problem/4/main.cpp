#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter an Integer: ";
    cin >> x;

    if (x%5 == 0){
       if(x%7 ==0){
            cout << x <<" is divisible by 5 and 7 ";
       }
       else{
            cout << x << " is divisible by 5 but not by 7";
       }
    }
    else {
        if(x%7 == 0){
            cout << x << " is divisible by 7 but not by 5";
        }
        else{
            cout << x << " is No divisible by 5 or 7";
        }
    }



    return 0;
}
