#include <iostream>
using namespace std;

int find_max_digit(int);
int count_max_digits(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = count_max_digits(n);

	cout << "The number of max digits is " << result;

	return 0;
}

int find_max_digit(int n)
{
	int max_digit = n % 10;
	while (n != 0)
	{
		int dv = n % 10;
		if (max_digit < dv)
			max_digit = dv;
		n = n / 10;
	}
	return max_digit;
}

int count_max_digits(int n)
{
	if (n == 0)
		return 1;
	int count = 0;
	int lc = find_max_digit(n);
	while (n != 0)
	{
		int dv = n % 10;
		if (dv == lc)
			count = count + 1;
		n = n / 10;
	}
	return count;
}
