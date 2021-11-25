#include <iostream>

using namespace std;

int main()
{
    int x,num,i,l,y;
    cout<<"Enter the number :";
    cin>>x;
    num=x;
    y=0;
    for(i=0;x!=0;i=i+1){
        l=x%10;
        y=(y*10)+l;
        x=x/10;
    }
    if(num==y)
        cout<<"Symmetrical";

    else
        cout<<"Not Symmetrical";

    return 0;
}
