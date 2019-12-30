#include <iostream>
using namespace std;

int tens_digit(int);

int main()
{
	int n;

	cout << "Enter the integer value n: ";
	cin >> n;

	int result = tens_digit(n);

	cout << "The tens digit is " << result;

	return 0;
}

int tens_digit(int n)
{
	int m = abs(n);
	int temp = m / 10;
	int tens = temp % 10;
	return tens;
}
