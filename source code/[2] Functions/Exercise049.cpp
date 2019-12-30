#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	cout << "All divisors are ";
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			cout << i << setw(6);
		}
		i = i + 1;
	}

	return 0;
}