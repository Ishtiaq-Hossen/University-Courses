#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"How many many do you want to take: ";
    cin>>n1;
    const int n=n1;
    cout<<"Enter your number serially\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Press 1 for showing even number 2 for showing odd number\n";
    int tmp;
    cin>>tmp;
    if(tmp==1){
        bool t= true;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<" ";
                t=false;
            }
        }
        if(t==true)cout<<"There isn't have any even number\n";
    }
    else if(tmp==2){
        bool t=true;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                cout<<arr[i]<<" ";
                t=false;
            }
        }
        if(t==true)cout<<"There isn't any odd number\n";
    }
    else cout<<"Invalid Input\n";
    return 0;
}