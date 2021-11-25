#include <iostream>

using namespace std;

int main()
{
  int n,i;
  float x,sum,ave,ver;

  cout << "Enter n: ";
  cin >> n;

  sum = 0;
  for(i = 0; i < n; i = i +1){
    cout << "["<<i+1<<"]= ";
    cin >> x;
    sum = sum + x;
  }
  ave = sum / n;
  cout << "Average= " << ave;

    return 0;
}
