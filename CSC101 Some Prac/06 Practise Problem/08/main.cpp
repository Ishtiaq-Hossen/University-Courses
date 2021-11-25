#include <iostream>

using namespace std;

int main()
{
   int ex, pow, fact;
   int i,j;
   float x;

   cout << "Enter x: ";
   cin >> x;

   ex = 1;
   for(j = 1;j<=5;j = j +1){
       pow = 1;
       fact = 1;
       for(i = 1; i <= j; i = i +1){
          pow = pow * x;
          fact = fact * i;
       }
       ex = ex + pow/fact;
   }
   cout << "e^" << x <<" = " << ex;

    return 0;
}
