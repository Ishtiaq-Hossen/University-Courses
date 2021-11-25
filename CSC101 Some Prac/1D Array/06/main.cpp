#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter "<<i+1<<" Number ";
        cin>>arr[i];

    }
    cout<<endl;
        for(int i=0;i<10;i++)
    {

        cout<<arr[i]<<" ";
    }
    int c=0;
    int c1=0;

    for(int i=0;i<10-1;i++)
    {
        if(arr[i]>arr[i+1]){
         c=1;

        }
        if(arr[i]<arr[i+1]){
            c1=1;
        }
    }
    if(c==0 && c1==1){
            cout<<endl<<"array is sorted ascending order"<<endl;
    }
    else if(c1==0 && c==1){
            cout<<endl<<"array is sorted descending order"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
        return 0;
    }


