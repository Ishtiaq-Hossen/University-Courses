//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int main()
{
    const int n=10;
    /**----if we want to take user input we need that----
        
    int arr[n],temp;
    for(int i=0;i<n;i++) cin>>arr[i];

    **/
    

    //------normal input starts here---/
    
    int arr[]={10,8,9,2,3,5,1,4,6,7},temp;
    //-----normal input ends here------/
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}





