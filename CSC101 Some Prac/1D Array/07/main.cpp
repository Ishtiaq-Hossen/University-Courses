#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int arr[11],max1,max2,min1,min2;

    for(int i=0;i<11;i++)
    {
        arr[i]=rand()%10;
        cout<<arr[i]<<" ";
    }
    max1=arr[0];
    min1=arr[0];
    for(int i=1;i<11;i++)
    {
        if(arr[i]>max1){
            max2=max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2 = arr[i];
        }
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2 &&arr[i]!=min1)
        {
            min2=arr[i];
        }
    }
    cout<<endl;
    cout<<"first max "<<max1<<endl;
    cout<<"second max "<<max2<<endl;
    cout<<"first min "<<min1<<endl;
    cout<<"second min "<<min2<<endl;

    return 0;
}
