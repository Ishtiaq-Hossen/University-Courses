#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
   int A[5][3];
   for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j] = rand() % (50 - 30 ) + 30;
        }
    }
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
}

