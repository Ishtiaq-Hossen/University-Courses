#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"Enter the size of the matrix: "<<endl;
    int x,y;
    cin>>x>>y;
   int A[x][y];
   cout<<"Please enter values "<<endl;
   for(int i=0;i<x;i++)
   {
       for(int j=0;j<y;j++)
       {
           cin>>A[i][j];
       }
   }
   for(int i=0;i<x;i++)
   {
       for(int j=0;j<y;j++)
       {
           cout<<A[i][j]<<" ";
       }
       cout<<endl;
   }
   int C[x][y];
   for(int i=0;i<x;i++)
   {
       for(int j=0;j<y;j++)
       {
           C[j][i]=A[i][j];
       }
   }
   cout<<"Transpose matrix: "<<endl;
   for(int i=0;i<x;i++)
   {
       for(int j=0;j<y;j++)
       {
           cout<<C[i][j]<<" ";
       }
       cout<<endl;
   }

}
