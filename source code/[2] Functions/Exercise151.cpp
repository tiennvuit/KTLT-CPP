#include <iostream>
using namespace std;

int check_2k_format(int);

int main()
{
	int n;

	cout << "Enter integer number n: ";
	cin >> n;

	int result = check_2k_format(n);

	if (result == 0)
		cout << "It's not 2^k format !";
	else
		cout << "It's 2^k format !";

	return 0;
}

int check_2k_format(int n)
{
	int flag = 1;
	if (n <= 0)
		flag = 0;
	else
	{
		while (n > 1)
		{
			if (!(n % 2 == 0))
				flag = 0;
			n = n / 2;
		}
	}
	return flag;
}