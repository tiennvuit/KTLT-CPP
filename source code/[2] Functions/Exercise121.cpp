#include <iostream>
#include <cmath>
using namespace std;

int fibonaci(int);

int main()
{
	int n;

	cout << "Enter the value n: ";
	cin >> n;

	int result = fibonaci(n);

	cout << "The value of " << n << "th term is " << result;

	return 0;
}

int fibonaci(int n)
{
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
	return current;
}
