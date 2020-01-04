#include <iostream>
using namespace std;

int find_first_digit(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	int result = find_first_digit(n);

	cout << "The first digit of " << n << " is " << result;

	return 0;
}

int find_first_digit(int n)
{
	while (n >= 10)
		n = n / 10;
	return n;
}