#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter the year: ";
    cin>>x;

    if((x%4==0)&&(x%100!=0)){
        cout<<"A leap year";
    }

    else if((x%100==0)&&(x%400!=0)){
        cout<<"Not a leap year";
    }

    else{
        cout<<"Not a leap year";
    }


    return 0;
}
