#include<iostream>
using namespace std;
int main()
{
    int X, N, a,b=0;
    cin>>X>>N;
    for(int i=1;N<=0;i++)
    cin>>N;
    for(a=1; a<=N; a++)
    {
        b+=X;
        X++;
    }
    cout<<b<<endl;
    return 0;
}
