#include <iostream>
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
		current = (-9 * current - 24) / (5 * current + 13);
		i = i + 1;
	}

	cout << "The value of " << n << "th term is " << fixed << current;

	return 0;
}