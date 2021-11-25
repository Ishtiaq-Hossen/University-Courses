#include<iostream>
using namespace std;
void LCM(int ,int );
int main()
{
    int a,b;
    LCM(a,b);
return 0;
}
void LCM(int x,int y){
    cin>>x>>y;
    if(x>y){
        cout<<"LCM is "<<y;
    }
    else{
        cout<<"LCM is "<<x;
    }
}
