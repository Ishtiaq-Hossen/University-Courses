#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float m=0,n=0,i,j;

    for(i=0;i<=2;i++){
        for( j=1;j<=3;j++){
            m+=i;
            n+=j;
            cout<<"I="<<showpoint<<fixed<<setprecision(1)<<i<<" J="<<showpoint<<fixed<<setprecision(1)<<j<<endl;
            m=0.2+m;
            n=0.2+n;
        }
    }

    return 0;
}
