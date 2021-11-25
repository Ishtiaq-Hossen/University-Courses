#include <iostream>

using namespace std;

int main()
{
   int x;

    cout << "Enter an Integer: ";
    cin >> x;

    if (x%5 == 0){
       if(x%3 ==0){
            cout << x <<" is divisible by 3 and 5 ";
       }
       else{
            cout << x << " is not divisible by 3 and 5";
       }
    }
    else {
            cout<<x<<"is not divisible by 3 & 5";
             }
    return 0;
}
