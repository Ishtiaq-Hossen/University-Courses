#include <iostream>

using namespace std;

int main()
{
    int m,x,y,i;
    cout<<"First Value: ";
    cin>>x;
    cout<<"Last Value:  ";
    cin>>y;

    if(x==y){
        cout<<"  ";
    }
    else if(y>x){


    for(i=x;i<y-1;i=i+1){
        if(i%2!=0){
            cout<<i<<",";
        }

    }

    for(m=y-1;m<=y;m=m+1){
        if(m%2!=0){
            cout<<m;
        }
    }
    }

return 0;
}
