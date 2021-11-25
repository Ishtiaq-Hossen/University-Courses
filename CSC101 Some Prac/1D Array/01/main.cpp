#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the size of the Array: ";
    cin>>x;
    int A[x];
    cout<<"Enter elements: ";
    for (int i=0; i<x; i++){
        cin>>A[i];
    }

    cout<<"\nForward: ";
    for (int i=0; i<x; i++){
        if(i==(x-1)){cout<<A[i]<<". ";}
        else {
        cout<<A[i]<<", ";}

        }

    cout<<"\nBackward: ";
    for (int i=1; i<=x; i++){
        if((x-i)==0) {cout<<A[x-i]<<". ";}
        else {cout<<A[x-i]<<", ";}
    }

    return 0;
}


