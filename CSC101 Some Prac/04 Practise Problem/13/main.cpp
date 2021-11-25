#include <iostream>

using namespace std;

int main()
{
    int n,y,i,a;
    cout<<"Enter: ";
    cin>>a;
    //n=a;
    for(i=0;a!=0;i=i+1){
        y=a%10;
        cout<<y;
        a=a/10;
    }




    return 0;
}

