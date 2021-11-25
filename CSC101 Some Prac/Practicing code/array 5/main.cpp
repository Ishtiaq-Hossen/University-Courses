#include <iostream>

using namespace std;

int main()
{
  int n,i,j,max_ind;
  float x[10],sum,temp;

  cout << "Enter n(n<10): ";
  cin >> n;

    // taking input into an array

      for(i = 0; i < n ; i = i + 1){
        cout << "["<<i+1<<"]= ";
        cin >> x[i];

        }
        j=0;
          for(i = 0; i < n ; i = i + 1){

         if (x[i] < x[i+1]){
            x[i]=x[i+1];
            j=x[i];
         }
         else {


         j=x[i];


       }
       cout<<x[i];
    }
    cout<<j;

    return 0;
}
