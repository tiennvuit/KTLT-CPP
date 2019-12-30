#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	// Find the first of n
	int first = n;
	while (first >= 10)
		first = first / 10;

	// Count number first digits 
	int count = 0;
	int m = n;
	while (m != 0)
	{
		int dv = m % 10;
		if (dv == first)
			count = count + 1;
		m = m / 10;
	}

	cout << "The number of first digits is " << count;

	return 0;
}