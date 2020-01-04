#include <iostream>
using namespace std;

void print_sequence(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	print_sequence(n);

	return 0;
}

void print_sequence(int n)
{
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		cout << T << "  ";
		i = i + 1;
	}
}
