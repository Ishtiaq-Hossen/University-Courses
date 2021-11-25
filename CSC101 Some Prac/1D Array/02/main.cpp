#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int size = 100;
    int A[size];
    float sum=0;
    srand(time(NULL));
     for (int i=0; i<size; i++){
        A[i]=rand()%size;
    }
    cout<<"Array: ";
    for (int i=0; i<size; i++){
    cout<<A[i]<<" ";
    sum=sum+A[i];}
    for (int i=0; i<size; i++){
    for (int j=0; j<size-1; j++){
     if(A[j]>A[j+1]){
        int x = A[j];
        A[j]=A[j+1];
        A[j+1]=x;
            }
        }
    }
    float avg=(sum/size);
    cout<<"\nSmall: "<<A[0]<<endl;
    cout<<"Large: "<<A[size-1]<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average = "<<avg;
    return 0;

}

