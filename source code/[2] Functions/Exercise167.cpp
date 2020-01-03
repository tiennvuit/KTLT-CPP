#include <iostream>
using namespace std;

int find_k_min(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = find_k_min(n);

	cout << "The min value k is " << result;

	return 0;
}

int find_k_min(int n)
{
	int S = 0;
	int i = 0;
	while (S < n)
	{
		S = S + i;
		i = i + 1;
	}
	return i;
}
