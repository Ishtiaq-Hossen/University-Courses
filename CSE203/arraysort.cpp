/*//-----array reverse in a position in main function-----/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={5,7,9,4,10,3,8};
    int len=sizeof(arr)/4;
    int pos=0,nex=6,n;    
    n=((nex-pos)/2)+1;    
    while(n--){
        swap(arr[pos],arr[nex]);
        pos++;
        nex--;
    }
    for(auto u:arr)cout<<u<<" ";
    return 0;
}*/


//------sort with recursion --/
/*
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    
    if (n == 1)
        return;
    for (int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }            
    }        
    bubbleSort(arr, n-1);
}
 
int main()
{
    int arr[]={5,7,9,4,10,3,8};
    int len=sizeof(arr)/4;
    bubbleSort(arr,len);
    for(auto u:arr)cout<<u<<" ";
    return 0;
}
*/



//-------reverse in a position with recursion----/
#include<iostream>
using namespace std;
void reverseArray(int array[], int leftIndex, int rightIndex)
{    
    if(leftIndex <= rightIndex){    
     swap(array[leftIndex],array[rightIndex]);
     reverseArray(array, leftIndex+1, rightIndex-1);
    }
}
int main()
{
    int arr[]={5,7,9,4,10,3,8};
    reverseArray(arr,2,5);
    for(auto u:arr)cout<<u<<" ";
    return 0;
}