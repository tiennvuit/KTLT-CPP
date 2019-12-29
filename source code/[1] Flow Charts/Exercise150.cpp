#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Enter two integer number a, b: ";
	cin >> a >> b;

	int m = abs(a);
	int n = abs(b);

	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int lcm = abs(a * b) / (m + n);

	cout << "The least common multiple is " << lcm;

	return 0;
}
