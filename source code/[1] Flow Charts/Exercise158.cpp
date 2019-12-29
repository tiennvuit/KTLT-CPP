#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	// Find the max digit of
	int m = n;
	int max_digit = m % 10;
	while (m != 0)
	{
		int dv = m % 10;
		if (max_digit < dv)
			max_digit = dv;
		m = m / 10;
	}

	// Count number max digits
	int count = 0;
	m = n;
	while (m != 0)
	{
		int dv = m % 10;
		if (dv == max_digit)
			count = count + 1;
		m = m / 10;
	}

	cout << "The number of max digits is " << count;

	return 0;
}