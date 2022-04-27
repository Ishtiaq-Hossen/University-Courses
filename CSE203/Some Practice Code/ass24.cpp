//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int factorCount(int);
int main()
{
    /**-----for user input--
    int n;
    cin>>n;
    cout<<factorCount(n)<<endl;

    **/
    //---for normal input
    cout<<factorCount(24)<<endl;
    
    return 0;
}
int factorCount(int formalParameter)
{
    int temp=1,count=0;
    while(1)
    {
        if(temp>formalParameter)break;
        if(formalParameter%temp==0)count++;
        temp++;
    }
    return count;
}