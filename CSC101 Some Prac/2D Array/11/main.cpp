#include <iostream>
using namespace std;


int main()
{
    int n = 7;
    int A[n][n];


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j] =0;
        }
    }


    int i = n/2;
    int j = n-1;


    for (int num = 1; num <= n*n; )
    {
        if (i == -1 && j == n)
        {
            j = n-2;
            i = 0;
        }
        else
        {

            if (j == n)
                j = 0;


            if (i < 0)
                i = n - 1;
        }
        if (A[i][j])
        {
            j -= 2;
            i++;
            continue;
        }
        else
            A[i][j] = num++;

        j++; i--;
    }

cout<<"The Matrix is :"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

     cout<<"The Sum of all row , column and diagonal is ="<<n*(n*n+1)/2<<endl;
    return 0;
}
