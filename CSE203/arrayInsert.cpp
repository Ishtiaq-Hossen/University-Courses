#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,10,3,15,14,0,4,15};
    int n=sizeof(arr)/4;
    int pos = 3, val = 35;
    for(int i=n-1; i>=pos; i--) { //------[0 1 2 3]
        arr[i+1] = arr[i];
    }
    
    arr[pos] = val;
    n++;
    for(int u:arr)cout<<u<<" ";
    return 0;
}