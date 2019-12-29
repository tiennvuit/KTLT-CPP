#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;

	cout << "Enter the value n: ";
	cin >> n;

	int previous = 1;
	int current = 1;
	int i = 2;
	while (i <= n)
	{
		int temp = current;
		current = current + previous;
		previous = temp;
		i = i + 1;
	}

	cout << "The value of " << n << "th term is " << fixed << current;

	return 0;
}