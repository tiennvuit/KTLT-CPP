#include <iostream>
using namespace std;

float calculate_nth(int);

int main()
{
	int n;

	cout << "Enter the value n: ";
	cin >> n;

	float result = calculate_nth(n);

	cout << "The value of " << n << "th term is " << fixed << result;

	return 0;
}

float calculate_nth(int n)
{
	float current = 2;
	int i = 2;
	while (i <= n)
	{
		current = (current * current + 2) / (2 * current);
		i = i + 1;
	}
	return current;
}