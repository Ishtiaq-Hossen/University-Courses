// solution (1)
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int n,c;
    cout<<"Array Size: ";
    cin>>n;
    int A[n], F[n];
    srand(time(NULL));

    for(int i = 0; i< n; i++)
    {
        A[i] = rand() % 100;
    }

    cout<<"Array Elements: ";

        for(int i = 0; i< n; i++)
    {
        cout<<A[i]<<"  ";
        F[i] = -1;
    }

    for(int i=0; i<n; i++)
    {
        c = 1;
        for(int j=i+1; j<n; j++)
        {
            if(A[i]==A[j])
            {
                c++;
                F[j] = 0;
            }
        }


        if(F[i] != 0)
        {
            F[i] = c;
        }
    }


    cout<<"\n\nFrequency of all elements of array : \n";
    for(int i=0; i<n; i++)
    {
        if(F[i] != 0)
        {
            cout<<A[i]<< " occurs "<< F[i]<<" times"<<endl;;
        }
    }
}
