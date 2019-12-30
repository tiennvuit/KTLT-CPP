#include <iostream>
#include <iomanip>
using namespace std;

void list_odd_divisors(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	cout << "All odd divisors are   ";
	list_odd_divisors(n);

	return 0;
}

void list_odd_divisors(int n)
{
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			cout << i << setw(4);
		}
		i = i + 1;
	}
}
