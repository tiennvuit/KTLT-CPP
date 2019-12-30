#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;

	cout << "Enter the value n: ";
	cin >> n;

	float current = 2;
	int i = 2;
	while (i <= n)
	{
		current = 5 * current + sqrt(24 * current * current - 8);
		i = i + 1;
	}

	cout << "The value of " << n << "th term is " << fixed << current;

	return 0;
}