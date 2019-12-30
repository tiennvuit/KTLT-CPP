#include <iostream>
using namespace std;

int unit_digit(int);

int main()
{
	int n;

	cout << "Enter the integer value n: ";
	cin >> n;

	int result = unit_digit(n);

	cout << "The unit digit is " << result;

	return 0;
}

int unit_digit(int n)
{
	int m = abs(n);
	int unit = m % 10;
	return unit;
}
