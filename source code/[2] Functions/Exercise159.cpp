#include <iostream>
using namespace std;

int find_min_digit(int);
int count_min_digits(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = count_min_digits(n);

	cout << "The number of min digits is " << result;

	return 0;
}

int find_min_digit(int n)
{
	int min_digit = n % 10;
	while (n != 0)
	{
		int dv = n % 10;
		if (min_digit > dv)
			min_digit = dv;
		n = n / 10;
	}
	return min_digit;
}

int count_min_digits(int n)
{
	int count = 0;
	int lc = find_min_digit(n);
	while (n != 0)
	{
		int dv = n % 10;
		if (dv == lc)
			count = count + 1;
		n = n / 10;
	}
	return count;
}
