#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a[4][3], b[3][2], mult[4][2];
    int i,j,k;


    for(i = 0; i < 4; ++i)
        for(j = 0; j < 3; ++j)
        {

             a[i][j]=rand()%10;
        }
        cout<<"First matrix: "<<endl;
   for(i = 0; i < 4; ++i)
   {

        for(j = 0; j < 3; ++j)
        {

             cout<<a[i][j]<<" ";
        }
        cout<<endl;
   }

    for(i = 0; i < 3; ++i)
        for(j = 0; j < 2; ++j)
        {
           b[i][j]=rand()%10;
        }
cout<<"Second matrix: "<<endl;
   for(i = 0; i <3 ; ++i)
   {

        for(j = 0; j < 2; ++j)
        {

             cout<<b[i][j]<<" ";
        }
        cout<<endl;
   }

    for(i = 0; i < 4; ++i)
        for(j = 0; j < 2; ++j)
        {
            mult[i][j]=0;
        }

    for(i = 0; i < 4; ++i)
        for(j = 0; j < 2; ++j)
            for(k = 0; k < 3; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < 4; ++i)
    for(j = 0; j < 2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == 2-1)
            cout << endl;
    }
    return 0;
}
