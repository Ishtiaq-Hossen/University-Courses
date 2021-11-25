#include<iostream>
using namespace std;
int main()
{

  int m,i,x,y;
  cout<<"Enter the 1st number: ";
  cin>>x;
  cout<<"Enter the 2nd number: ";
  cin>>y;
  for(i=x;i<y-1;i=i+1){
    if(i%7==0){
        cout<<i<<",";
    }
  }
  for(m=y-1;m<=y;m=m+1){
        if(m%7==0){
            cout<<m;
        }
  }
  return 0;
}

