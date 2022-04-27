//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
int main()
{

    const int r=4,c=5;
    bool isPrime;
    /*----for user input---------
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    */
    
    
    //------normal input starts here---/
    int arr[r][c]={{2,3,4,5,6},
                   {7,8,9,10,11},
                   {12,13,14,15,16},
                   {17,18,19,20,21}};

    //------normal input ends here---/

    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            isPrime=1;
            for(int k=2;k<arr[i][j];k++){
                if(arr[i][j]%k==0){
                    isPrime=0;
                    
                }
            }
            if(isPrime) cout<<arr[i][j]<<",";

            
        }
    }
    cout<<"\b \n";
    
    
    return 0;
}

