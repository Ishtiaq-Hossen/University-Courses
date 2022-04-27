#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,7,10,6,8,2,15,1};
    int len=sizeof(arr)/4;
    int arr2[len];
    for(int i=0;i<len;i++)
    {
        arr2[i]=arr[i];
    }
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr2[i]>arr2[j])
                swap(arr2[i],arr2[j]);
        }
    }     
    for(int i=0;i<len;i++)
    {
        if((arr[i]==arr2[0])||(arr[i]==arr2[1])||(arr[i]==arr2[2]))
        {            
          for(int j=i;j<len;j++){
              arr[j]=arr[j+1];
          }  
          len--;
          i=0;
        }
    }
    for(int i=0;i<len;i++)cout<<arr[i]<<" ";
    return 0;
}
