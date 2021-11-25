#include <iostream>

using namespace std;

int main()
{
  int n,i,j, max_ind;
  float x[10],temp;

  cout << "Enter n(n<10): ";
  cin >> n;

// taking input into an array
  for(i = 0; i < n ; i = i + 1){
    cout << "["<<i+1<<"]= ";
    cin >> x[i];
  }

// printing content of an array
  for(i = 0; i < n ; i = i + 1){
    cout << x[i]<<"  ";
  }

// finding the maximum value and index in an array
  for(j = 0; j < n - 1; j = j +1){
      max_ind = j;
      for(i = j + 1; i < n ; i = i + 1){
        if(x[i] > x[max_ind]){
            max_ind = i;
        }
      }
      temp = x[j];
      x[j] = x[max_ind];
      x[max_ind] = temp;
  }
// printing content of an array
  cout << endl << "Sorted Array"<<endl;
  for(i = 0; i < n ; i = i + 1){
    cout << x[i]<<"  ";
  }

    return 0;
}
