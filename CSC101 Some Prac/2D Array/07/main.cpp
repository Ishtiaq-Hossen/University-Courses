#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
   int A[5][7],B[5*7];
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<7;j++)
       {
           A[i][j]=rand()%10;
       }
   }
   cout<<"Displaying 2D array: "<<endl;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<7;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
   int k=0;
      for(int i=0;i<5;i++)
   {
       for(int j=0;j<7;j++)
       {
           B[k]=A[i][j];
           k++;
       }
   }
   cout<<"Displaying 1D array: "<<endl;
   for(int i=0;i<35;i++)
   {
       cout<<B[i]<<" ";
   }


}

