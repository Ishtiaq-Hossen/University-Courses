// 3 way merge sort implementation--------/
/*
    ->merge sort follows divide and conqueuer algorithm 
    ->space complexity O ( n ) 
    ->time complexity O(nlogn)
    ->it's stable (can handle duplicate number)
    ->Can't handle negative numbers
*/
#include <bits/stdc++.h>
using namespace std;
void merge(int A[], int p, int q, int r)
{
    int size1 = q - p + 1;
    int size2 = r - q;
 
    int L[size1],R[size2];

    for (int i = 0; i < size1; i++)
         L[i] = A[p + i];
    for (int j = 0; j < size2; j++)
        R[j] = A[q + j+1];
 
    int i1 = 0, j2= 0; 
    int temp = p; 

    while (i1 < size1 && j2< size2) {
        if( L[i1] <= R[j2]) {
            A[temp] =L[i1];
            i1++;
        }
        else {
            A[temp] = R[j2];
            j2++;
        }
        temp++;
    }
    while (i1 < size1) {
        A[temp] =L[i1];
        i1++;
        temp++;
    }
    while (j2< size2) {
        A[temp] = R[j2];
        j2++;
        temp++;
    }
}
 
void mergeSort(int A[], int p, int  q)
{
    if (p >= q)
        return;
    // dividing the array into 3 parts
    int mid1 =p + ((q - p) / 3);
    int mid2 =p + 2 * ((q - p) / 3) + 1;
    
    
    mergeSort(A, p, mid1);
    mergeSort(A, mid1 + 1, mid2);
    mergeSort(A, mid2 + 1, q);
    merge(A, p, mid1, mid2);
    merge(A, mid1, mid2, q);
}
 
int main()
{
    int arr[] = { 15,7,8,9,10,45 };
    int size1 = sizeof(arr) / sizeof(arr[0]);
 
    mergeSort(arr, 0, size1 - 1);
 
    cout << "After sorting with 3 way merge sort "<<endl;
    for (int i = 0; i < size1; i++)
        cout << arr[i] << " ";

    return 0;
}
// C++ program to implement Shortest Remaining Time First
// Shortest Remaining Time First (SRTF)


