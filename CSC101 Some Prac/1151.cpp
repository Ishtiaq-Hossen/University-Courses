#include<iostream>
using namespace std;
int main()
{
    int n,k=0,fib1=0,fib2=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<n)
        cout<<fib1<<" ";
        else
        cout<<fib1<<endl;
        k=fib1+fib2;
        fib1=fib2;
        fib2=k;
    }

    return 0;
}
