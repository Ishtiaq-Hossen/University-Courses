#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9,2,16,3,11};
    int length=sizeof(arr)/4;
    int sum=27;
    //sort(arr+0,arr+length);
    //for(int u:arr)cout<<u<<" ";
    int j,k,m;
    for(int i=0;i<length;i++){
        for(j=i+1;j<length;j++){
            if(arr[i]*arr[j]==sum)
            {
                k=arr[i];
                m=arr[j];
                break;
            }
        }
    }
    if(k<m)cout<<"{"<<k<<","<<m<<"}\n";
    else cout<<"{"<<m<<","<<k<<"}\n";
    cout<<"(";
    for(int i=0;i<length;i++)
    {
        arr[i]*=(k+m);
        cout<<arr[i]<<",";
    }
    cout<<"\b)\n";
    return 0;
}
