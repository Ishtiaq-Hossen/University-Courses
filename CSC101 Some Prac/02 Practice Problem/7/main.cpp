#include <iostream>

using namespace std;

int main()
{
    int h,w,d;
    cout<<"Enter the value:";
    cin>>h;
    cout<<"Total Hours="<<h<<endl;

     d=h/24;
    h=h%24;
    w=d/7;
    d=d%7;


    cout << w <<" weeks " << d << " days and " << h <<" hours " <<endl;
    return 0;


}
