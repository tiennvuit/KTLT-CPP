#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter integer number n: ";
	cin >> n;

	int flag = 1;
	if (n <= 0)
		flag = 0;
	else
	{
		int m = n;
		while (m > 1)
		{
			if (!(m % 5 == 0))
				flag = 0;
			m = m / 5;
		}
	}

	if (flag == 0)
		cout << "It's not 5^k format !";
	else
		cout << "It's 5^k format !";
	return 0;
}