#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cout<<"Enter the value of a:";
   cin>>a;
   cout<<"Enter the value of b:";
   cin>>b;

   c=a;
   a=b;
   b=c;

   cout<<"Here is the value of a"<<a <<endl;
   cout<< "Here is the value of b"<<c;



    return 0;
}
