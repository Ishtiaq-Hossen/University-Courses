//*------implementing HeapSort & MAX priority queue return -----/

#include <iostream>
using namespace std;

/*Paseudocode ----
    Max_Heapify(A,i):
    l = Left(i)
    r = Right(i)
    if l ≤ A.heap_size and A[l] > A[i]:
    largest = l
    else
    largest = i
    if r ≤ A.heap_size and A[r] > A[largest]:
    largest = r
    if largest != i:
    exchange A[i] with A[largest]
    Max_Heapify(A, largest)

    Build_Max_Heap(A):
    A.heap_size = A.length
    for i = ⌊A.length/2⌋ downto 1:
    Max_Heapify(A,i)

    Heapsort(A):
    Build_Max_Heap(A)
    for i = A.length downto 2:
    exchange A[1] with A[i]
    A.heap_size = A.heap_size - 1
    Max_heapify(A, 1)

*/
void MAX_heapify(int A[], int n, int i) {

    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l < n && A[l] > A[largest])
      largest = l;

    if (r < n && A[r] > A[largest])
      largest = r;

    if (largest != i) 
    {
      swap(A[i], A[largest]);
      MAX_heapify(A, n, largest);
    }
}

void BuildHeap(int A[], int n)
{

  int ind = (n / 2) - 1;

  for (int i = ind; i >= 0; i--) {
    MAX_heapify(A, n, i);
  }

}

void Heapsort(int A[], int n) {

  BuildHeap(A,n);
  for (int i = n - 1; i >= 0; i--) {
  swap(A[0], A[i]);
  MAX_heapify(A, i, 0);
  }
}

//Max_priority queue
int Maximum(int A[],int n)
{
  return A[n];
}

int main() {
    int A[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(A) / sizeof(A[0]);
    Heapsort(A, n);

    for(auto u:A)cout<<u<<" ";

    cout<<endl<<Maximum(A,n);
    return 0;
}