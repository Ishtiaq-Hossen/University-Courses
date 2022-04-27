//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int arr[5]={9,2,16,3,11},low=0,high=4;
void rev(int st[])
{
    if(low<=high)
    {
        swap(st[low],st[high]);
        low++;
        high--;
        rev(st);
    }
    else{
        return;
    }
}

int main()
{
    rev(arr);
    for(auto u:arr)cout<<u<<" ";
    int arr2[3],arr3[5],i=0;
    for(auto u:arr){
        arr3[i]=arr[i];
        i++;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr3[i]>arr3[j])
            {
                swap(arr3[i],arr3[j]);
            }
            
        }
        if(i<3)
        arr2[i]=arr3[i];
    }
    cout<<endl;
    
        for(int j=0;j<3;j++){
            for(int i=0;i<5;i++)
            {
                if(arr3[j]==arr[i]){
                    arr[i]=0;
                }
            }
        }
    
    for(auto u:arr)cout<<u<<" ";
    return 0;
}
