#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	float S = 1;
	int i = 1;
	while (i <= n)
	{
		S = 1 + 1 / (1 + S);
		i = i + 1;
	}

	cout << "The result is " << fixed << S;

	return 0;
}