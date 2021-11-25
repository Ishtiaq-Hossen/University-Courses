#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
    {
        A[i]= rand()%20;
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
     cout<<endl;
     int c=0;
 for(int i=0;i<n;i++)
    {

        int prime=0;
        if(A[i]==0 || A[i]==1 || A[i]==2){
                    prime=1;
            }
        for(int j=2;j<A[i];j++){

            if(A[i]%j==0){
              prime=1;
              break;
            }
        }
        if(prime!=1){
            c++;
        }
    }
    cout<<"Array Has "<<c<<" prime number"<<endl;
    return 0;
}


