#include <iostream>
using namespace std;

int check_3k_format(int);

int main()
{
	int n;

	cout << "Enter integer number n: ";
	cin >> n;

	int result = check_3k_format(n);

	if (result == 0)
		cout << "It's not 3^k format !";
	else
		cout << "It's 3^k format !";
	return 0;
}

int check_3k_format(int n)
{
	int flag = 1;
	if (n <= 0)
		flag = 0;
	else
	{
		while (n > 1)
		{
			if (!(n % 3 == 0))
				flag = 0;
			n = n / 3;
		}
	}
	return flag;
}
