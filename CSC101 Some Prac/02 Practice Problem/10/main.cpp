#include <iostream>

using namespace std;

int main()
{
   int x,c,d,z;
   cout<<"Enter the three digit number: ";
   cin>>x;
   cout <<x<<" Became ";


  c=x/100;
  x=x%100;
  d=x/10;
  z=x%10;

    cout << z<<d<<c<< endl;
    return 0;
}
