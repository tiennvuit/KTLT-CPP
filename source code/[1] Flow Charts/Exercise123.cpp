#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;

	cout << "Enter the value n: ";
	cin >> n;

	int a_current = 2;
	int b_current = 1;
	int i = 2;
	while (i <= n)
	{
		int temp = a_current;
		a_current = 3 * b_current + 2 * a_current;
		b_current = temp + 3 * b_current;
		i = i + 1;
	}

	cout << "The value of " << n << "th term: ";
	cout << "\na^(" << n << "th) " << a_current;
	cout << "\nb^(" << n << "th) " << b_current;

	return 0;
}