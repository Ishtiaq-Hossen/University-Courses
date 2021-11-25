#include <iostream>

using namespace std;

int main()
{
    int i,x[6];


    for(i=0;i<6;i++){
    cout<<"Enter :"<<endl;
    cin>>x[i];
    }

    cout<<"The value of x: "<<endl;

    for(i=0;i<6;i++){
    cout<<x[i]<<endl;
    }
    return 0;
}
