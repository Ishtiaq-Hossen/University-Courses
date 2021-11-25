//solution with integer
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{   int x,y;
    cout<<"Input lower range: ";
    cin>>x;
    cout<<"Input upper range: ";
    cin>>y;

    int ran=(y-x)+1;
    int size = 25;
    int A[size];
    srand(time(NULL));

     for (int i=0; i<size; i++){
        A[i]=x+rand()%ran;
    }
    cout<<"Array: ";
    for (int i=0; i<size; i++){
    cout<<A[i]<<" ";}
return 0;
}
