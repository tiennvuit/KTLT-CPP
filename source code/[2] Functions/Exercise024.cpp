#include <iostream>
using namespace std;

int leading_digit(int);

int main()
{
	int n;

	cout << "Enter the integer value n: ";
	cin >> n;

	int result = leading_digit(n);

	cout << "The leading digit is " << result;

	return 0;
}

int leading_digit(int n)
{
	int m = abs(n);
	int temp = m / 10;
	temp = temp / 10;
	int leading = temp % 10;
	return leading;
}