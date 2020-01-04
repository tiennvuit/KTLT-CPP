#include <iostream>
using namespace std;

int find_reverse_number(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	int result = find_reverse_number(n);

	cout << "The reverse number of " << n << " is " << result;

	return 0;
}

int find_reverse_number(int n)
{
	int reverse = 0;
	while (n != 0)
	{
		int dv = n % 10;
		reverse = reverse * 10 + dv;
		n = n / 10;
	}
	return reverse;
}