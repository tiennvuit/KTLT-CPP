#include <iostream>
#include <iomanip>
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
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + (float)1 / i;
		cout << fixed << setw(6) << setprecision(2) << S << "  ";
		i = i + 1;
	}
}
