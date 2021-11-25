#include<iostream>
using namespace std;
int LCM(int ,int);
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    LCM(num1,num2);

    return 0;
}
int LCM(int a, int b){
    int lcm1,max1;

    if(a>b)
        max1=a;
    else
        max1=b;
    for(lcm1=max1;lcm1>=max1;lcm1++){
       if(lcm1%a==0&&lcm1%b==0){
        cout<<lcm1;
        break;
       }

    }
return lcm1;
}
