#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	// Find the min digit of
	int m = n;
	int min_digit = m % 10;
	while (m != 0)
	{
		int dv = m % 10;
		if (min_digit > dv)
			min_digit = dv;
		m = m / 10;
	}

	// Count number min digits 
	int count = 0;
	m = n;
	while (m != 0)
	{
		int dv = m % 10;
		if (dv == min_digit)
			count = count + 1;
		m = m / 10;
	}

	cout << "The number of min digit is " << count;

	return 0;
}