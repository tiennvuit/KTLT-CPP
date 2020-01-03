#include <iostream>
using namespace std;

int find_k_max(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = find_k_max(n);

	cout << "The max value k is " << result;

	return 0;
}

int find_k_max(int n)
{
	int T = 1;
	int i = 0;
	while (T < n)
	{
		T = T * 2;
		i = i + 1;
	}
	return i - 1;
}