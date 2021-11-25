#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter the number: " << endl;
    cin>>a;

    if ((50<a)&&(100>a)){

        if((a%13==0)||(a%9==0)){
        cout<<"Yes";
        }
        else{
        cout<<"No";
        }
    }
    else {
        cout<<"No";
    }



    return 0;
}
