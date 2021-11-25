#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
   int A[5][5];
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           A[i][j]=rand()%10;
       }
   }
   cout<<"Displaying the array: "<<endl;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
   int sum=0;
   int sum2=0;
  for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           if(i==j)
           {
              sum=sum+A[i][j];
           }
           if(i+j==5-1)
           {
               sum2=sum2+A[i][j];
           }
       }
   }
   cout<<"Sum of 1st diagonal= "<<sum<<endl;
   cout<<"Sum of 2st diagonal= "<<sum2<<endl;

}
