//--------Bismillahir Rahmanir Rahim----------/
/**--------------------
[
    Question:
    Write a C++ program to find the max of an integral data set. 
    The program will ask the user to input the number of data values in the set and each value. 
    The program prints on screen a pointer that points to the max value

]
-----------------------**/
#include<iostream>
using namespace std;
int main()
{
    int temp=0;
    cout<<"How many data sets you want to enter: ";
    cin>>temp;
    const int n=temp;
    int arr[n];
    int max=0,*p;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(max<arr[i]){
            swap(max,arr[i]);
            p=&max;
        }
    }
    cout<<"Max value of this data set stored in *p\nThe value is: "<<*p<<endl;
    return 0;
}
/**--------------------
[
    test case
    6
    15 1 240 -48 15 120
]
-----------------------**/