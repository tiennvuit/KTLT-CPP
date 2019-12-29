#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int T = 1;
	int i = 0;
	while (T < n)
	{
		T = T * 2;
		i = i + 1;
	}

	cout << "The max value k is " << i - 1;

	return 0;
}