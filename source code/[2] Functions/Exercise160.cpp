#include <iostream>
#include <iomanip>
using namespace std;

int first_digit(int);
int count_first_digit(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = count_first_digit(n);

	cout << "The number of first digits is " << result;

	return 0;
}

int first_digit(int n)
{
	while (n >= 10)
		n = n / 10;
	return n;
}

int count_first_digit(int n)
{
	int lc = first_digit(n);
	int count = 0;
	while (n != 0)
	{
		int dv = n % 10;
		if (dv == lc)
			count = count + 1;
		n = n / 10;
	}
	return count;
}
