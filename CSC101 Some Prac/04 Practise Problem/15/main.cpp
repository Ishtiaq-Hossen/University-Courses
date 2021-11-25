#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float x, sum, average;

    cout << "Enter an value ";
    cin >> n;

    sum = 0;

    for(i = 1; i <= n; i = i +1){
            cout << "[" << i << "]=" ;
            cin >> x ;
            sum = sum + x;
    }

    average = sum / n;
    cout << "average = "<< average;

    return 0;
}



