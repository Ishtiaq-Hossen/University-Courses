#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
   int A[10],B[2][5];
   for(int i=0;i<10;i++)
   {
           A[i]=rand()%10;
   }

   cout<<"Displaying 1D array: "<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<A[i]<<" ";
   }
   cout<<endl;
   int k=0;
   for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){
        B[i][j]= A[k];
        k++;
    }
   }
   cout<<"Displaying 2D array: "<<endl;

    for(int i=0;i<2;i++)
   {
       for(int j=0;j<5;j++)
       {
           cout<<B[i][j]<<" ";
       }
       cout<<endl;
   }


}

