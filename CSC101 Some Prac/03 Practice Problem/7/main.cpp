#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    if (x>=35){
        if (x<75){
            if (x%5==0){
                if(x%2!= 0){
                cout<<"Yes";
                }
                else{
                cout<<"No";
                }
            }
        }
    }
    else{
        cout<<"No";
    }

    return 0;
}
