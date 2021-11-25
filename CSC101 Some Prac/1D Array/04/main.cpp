#include <iostream>
#include<cstdlib>
using namespace std;


void coutNumber(int arr[], int n,int num){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            c++;
        }
    }
    cout<<num<<" is occur "<<c <<" times"<<endl;
}

int main()
{

   int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=rand()%20;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++)
    {
       coutNumber(arr,10,arr[i]);
//       cout<<arr[i]<<"occurs "<<counter<<" times"<<endl;

    }
    return 0;
}
