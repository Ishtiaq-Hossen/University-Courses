//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,15,6,8,2,9,8,0,5};
    //a[]={2,4,15,6,8,2,9,8,0,5};
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    int k=3;
    int l=7;
    cout<<endl;
    
    /*
    int j=l;
    for(int i=k;i<=j;i++){
        swap(a[i],a[j]);
        j--;
    }//cout<<"---------------";*/
    while(k<=l)
    {
        swap(a[k],a[l]);
        k++;
        l--;
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
