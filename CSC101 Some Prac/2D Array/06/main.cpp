#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
   float A[15][10];
   for(int i=0;i<15;i++)
   {
       for(int j=0;j<10;j++)
       {
           A[i][j]=((float)rand()/RAND_MAX)*10;
       }
   }
   for(int i=0;i<15;i++)
   {
       for(int j=0;j<10;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }


      for(int i=0;i<15;i++)
   {
       float sum=0;
       for(int j=0;j<10;j++)
       {
          sum = sum+ A[i][j];
       }
       cout<<"Avg of "<<i+1<<" row = "<<sum/10;
       cout<<endl;
   }


}

