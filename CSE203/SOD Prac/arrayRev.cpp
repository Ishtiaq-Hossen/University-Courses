#include<iostream>
using namespace std;
void rev(int a[],int r,int l)
{    
    if(r<=l)
    {        
        swap(a[r],a[l]);        
        rev(a,r+1,l-1);
    }
}
int main()
{
    int a[]={5,3,1,4,9,0,2};
    int len=sizeof(a)/4;
    int r=0;
    len--;
    /*while(r<=len)
    {
        swap(a[r],a[len]);
        r++;
        len--;
    }*/
    rev(a,0,len);
    for(auto u:a)cout<<u<<" ";
    return 0;
}