#include <iostream>

using namespace std;

int main()
{
    int a,d;
    cout<<"Enter the number: ";
    cin>>a;
    d=a%2;

    if(d==0){
        cout<<a<<" is even";

    }
    else{
        cout<<a<<" is odd";

    }


    return 0;
}
