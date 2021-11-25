#include <iostream>

using namespace std;

int main()
{
    int x,y,i,z;

    cout <<"Enter the value of x = ";
    cin >> x;
    cout << "Enter the value of y = ";
    cin >> y;


    for (i = x; i >= 1; i = i + 1){
        if((x % i == 0) && (y % i == 0)){

            cout << "LCF = " << i << endl;
            break; // you can also use i = 1;
        }
        else if(x>y){
            cout<<""<<x<<endl;
        }
        else if(y>x){
            cout<<""<<y<<endl;
        }


        }


    return 0;
}
