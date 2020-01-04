#include <iostream>
using namespace std;

void print_Collatz(int);

int main()
{
	int n;

	cout << "Enter integer number n: ";
	cin >> n;

	print_Collatz(n);

	return 0;
}

void print_Collatz(int n)
{
	cout << n<< "  ";
	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = 3 * n + 1;
		cout << n << "  ";
	}
}