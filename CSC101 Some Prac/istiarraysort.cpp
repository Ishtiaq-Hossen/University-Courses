#include<iostream>
#include<conio.h>
using namespace std;
void sortmyarray(int ,int[]);
int main()
{
    int i=0,arr[i];
    cin>>i;
    for(int j=0;j<i;j++){
        cin>>arr[j];
    }
    cout<<"\nHere is the number of array\n";
    for(int j=0;j<i;j++){
        cout<<arr[j]<<" ";
    }
    cout<<"\n\nHere is the sorted array\n";
    sortmyarray(i,arr);

    getch();
}
void sortmyarray(int num,int arr[]){
int ini,j,k,temp;
    for(j=0;j<num-1;j++){
        ini=j;
        for(k=j+1;k<num;k++){
            if(arr[k]<arr[ini])
                ini=k;
        }
           temp=arr[j];
           arr[j]=arr[ini];
           arr[ini]=temp;
    }
    for(int l=0;l<num;l++){
        cout<<arr[l]<<" ";
    }

}
