#include <iostream>
#include <iomanip>
using namespace std;

void list_divisors(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	list_divisors(n);

	return 0;
}

void list_divisors(int n)
{
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
}
