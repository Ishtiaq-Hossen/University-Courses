#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int arr[10],evenArr[10],oddArr[10];
    int k=0,j=0;

    for(int i=0;i<10;i++){
        arr[i]= rand()%100;
    }
    cout<<"Main array: ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

        if(arr[i]%2==0){
            evenArr[j]=arr[i];
            j++;
        }
        else{
            oddArr[k] =arr[i];
            k++;
        }
    }
    cout<<endl<<"Even array :";
    for(int i=0;i<j;i++){
        cout<<evenArr[i]<<" ";
    }
    cout<<endl<<"Odd array :";
     for(int i=0;i<k;i++){
        cout<<oddArr[i]<<" ";
    }

return 0;}

