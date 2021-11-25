#include<iostream>
using namespace std;
int main()
{

    int k1,k2;
    cin>>k1;
    cin>>k2;
    int arr[k1][k2];
    for(int i=0; i<k1; i++)
    {
        for(int j=0; j<k2; j++)
        {
            cout<<"["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }

    }
    for(int i=0; i<k1; i++)
    {
        for(int j=0; j<k2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }









    return 0;
}
