#include <iostream>
#include <cstdlib>
using namespace std;
void bubbleSort(int arr[], int szofArr){
    for(int i =0;i<szofArr; ++i){
            for(int j=0; j<szofArr-1; ++j){
               if(arr[j]> arr[j+1]){
                    int a = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = a;
               }
            }
    }
}
int main(){
    int iub[7000];
    int nsu[10000];
    for(int i =0 ; i<7000;++i)iub[i] = rand()%7000;
    for(int i =0 ; i<10000;++i)nsu[i] = rand()%10000;
    int sizeofArray1 = 7000;
    int sizeofArray2 = 10000;
    bubbleSort(iub,sizeofArray1);
    bubbleSort(nsu,sizeofArray2);
    for(int i=0; i<sizeofArray1; ++i)
        cout<<iub[i]<<" ";
    return 0;
}









