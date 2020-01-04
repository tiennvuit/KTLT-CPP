#include <iostream>
using namespace std;

int find_GCD(int, int);

int main()
{
	int a, b;

	cout << "Enter two integer number a, b: ";
	cin >> a >> b;

	int result = find_GCD(a, b);

	cout << "The greatest common divisor is " << result;

	return 0;
}

int find_GCD(int a, int b)
{
	int m = abs(a);
	int n = abs(b);

	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
}