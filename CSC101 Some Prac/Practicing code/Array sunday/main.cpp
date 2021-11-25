#include <iostream>

using namespace std;

int main()
{
    int i,x[5];


    cout<<"Enter : "<<endl;

    for(i=0;i<25;i=i+1){


    cout<<"["<<i+1<<"] = ";
    cin>>x[i];
    }
    cout<<"These are :"<<endl;
    for(i=0;i<25;i++){

    cout<<"["<<i+1<<"] = "<<x[i]<<" "<<endl;
    }
    return 0;
}
