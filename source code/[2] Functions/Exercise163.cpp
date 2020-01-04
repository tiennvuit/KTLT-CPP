#include <iostream>
using namespace std;

int find_max_odd(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = find_max_odd(n);

	cout << "The max odd divisor of " << n << " is " << result;
	return 0;
}

int find_max_odd(int n)
{
	int odd_divisor = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			odd_divisor = i;
		i = i + 2;
	}
	return odd_divisor;
}
