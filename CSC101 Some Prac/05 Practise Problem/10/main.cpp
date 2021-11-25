// CPP program to find summation of series
#include <bits/stdc++.h>
using namespace std;

int summingSeries(long n)
{
	// use of loop to calculate
	// sum of each term
	int S = 0;
	for (int i = 1; i <= n; i++)
		S += i * i - (i - 1) * (i - 1);

	return S;
}

// Driver Code
int main()
{
	int n = 100;
	cout << "The sum of n term is: "
		<< summingSeries(n) << endl;
	return 0;
}
