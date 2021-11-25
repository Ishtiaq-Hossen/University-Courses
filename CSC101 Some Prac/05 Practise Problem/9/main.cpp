#include<iostream>
using namespace std;
int main()
{

int x,num,i,l,y,a,k;
    cout<<"Enter the number :";
    cin>>x;
    num=x;
    y=0;
    if(x==0){
        cout<<"0";
    }
    for(i=0;x!=0;i=i+1){
        l=x%10;
        y=(y*10)+l;
        x=x/10;
    }
    for(i=0;y!=0;i=i+1){
        k=y%10;
        cout<<k<<endl;
        y=y/10;
        }

return 0;
}
