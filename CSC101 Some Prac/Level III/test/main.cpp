#include <iostream>

using namespace std;

int main()
{
  int n,i;
  float x[10],sum,ave,ver;

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
  // adding n elements of an array
  sum = 0;
  for(i = 0; i < n; i = i +1){
    sum = sum + x[i];
  }
  // calculate average
  ave = sum / n;
  cout <<endl << "Average= " << ave;

  // adding squared difference of an array
  sum = 0;
  for(i = 0; i < n; i = i +1){
    sum = sum + (ave-x[i])*(ave-x[i]);
  }

  //calcualte variance
  ver = sum / n;
  cout <<endl << "Variance= " << ver;
    return 0;
}
