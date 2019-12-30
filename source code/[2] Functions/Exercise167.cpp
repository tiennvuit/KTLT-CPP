#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int S = 0;
	int i = 0;
	while (S < n)
	{
		S = S + i;
		i = i + 1;
	}

	cout << "The max value k is " << i - 1;

	return 0;
}