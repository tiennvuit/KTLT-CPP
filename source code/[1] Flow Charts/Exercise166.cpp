#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int T = 1;
	int i = 0;
	while (T <= n)
	{
		T = T * 2;
		i = i + 1;
	}

	cout << "The min value k is " << i;

	return 0;
}