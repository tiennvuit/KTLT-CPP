#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int odd_divisor = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			odd_divisor = i;
		i = i + 2;
	}

	cout << "The max odd odd_divisor of " << n << " is " << odd_divisor;
	return 0;
}