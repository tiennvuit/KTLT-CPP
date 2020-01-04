#include <iostream>
using namespace std;

int check_5k_format(int);

int main()
{
	int n;

	cout << "Enter integer number n: ";
	cin >> n;

	int result = check_5k_format(n);

	if (result == 0)
		cout << "It's not 5^k format !";
	else
		cout << "It's 5^k format !";
	return 0;
}

int check_5k_format(int n)
{
	int flag = 1;
	if (n <= 0)
		flag = 0;
	else
	{
		while (n > 1)
		{
			if (!(n % 5 == 0))
				flag = 0;
			n = n / 5;
		}
	}
	return flag;
}
