#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Enter z: ";
    cin>>z;

    if(x>z){
        if(x>y){
            if(y>z){
              cout<<"Largest: " <<x<<endl;
              cout<<"Smallest: " <<z<<endl;
            }
            else{
                cout<<"Largest: " <<x<<endl;
              cout<<"Smallest: " <<y<<endl;
            }
        }
        else{
            cout<<"Largest:"<<y<<endl;
             cout<<"Smallest:"<<z<<endl;
        }
    }

    else if(z>y){
        if(y>x){
           cout<<"Largest:"<<z<<endl;
             cout<<"Smallest:"<<x<<endl;
        }
        else{
            cout<<"Largest:"<<z<<endl;
             cout<<"Smallest:"<<y<<endl;
        }

    }
    else{
        cout<<"Largest:"<<y<<endl;
             cout<<"Smallest:"<<x<<endl;
    }




    return 0;
}
