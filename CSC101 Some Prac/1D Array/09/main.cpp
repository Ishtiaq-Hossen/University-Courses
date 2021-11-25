#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    int first=0;
    int second =1;
    int term;
    for(int i=0;i<n;i++)
    {

        term = first+second;
        first = second;
        second = term;
        arr[i]= term;

    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;



    return 0;
}

