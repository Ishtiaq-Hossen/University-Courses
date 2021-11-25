#include<iostream>
using namespace std;
void Sort(int a[], int n) {
   int i, j, initial, temp;
   for (i = 0; i < n - 1; i++) {
      initial= i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[initial])
      initial = j;
      temp = a[i];
      a[i] = a[initial];
      a[initial] = temp;
   }
}
int main() {
   int n,j=0,a[j] ;
   cin>>j;
   for(int i=0;i<j;i++){
   cin>>a[i];
   }
   //int n = sizeof(a)/ sizeof(a[0]);
   n=j;
   cout<<"Given array is:"<<endl;
   for (int i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   Sort(a, n);
   cout<<"\nSorted array is: \n";
   for (int i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
