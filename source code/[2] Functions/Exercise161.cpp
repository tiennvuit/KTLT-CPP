#include <iostream>
#include <iomanip>
using namespace std;

int check_ascending(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	int result = check_ascending(n);

	if (result == 0)
		cout << "No. It's not acsending !";
	else
		cout << "Yes. It's acsending !";

	return 0;
}

int check_ascending(int n)
{
	int flag = 1;
	int m = n;
	while (m >= 10)
	{
		int unit = m % 10;
		int tens = (m / 10) % 10;
		if (unit <= tens)
			flag = 0;
		m = m / 10;
	}
	return flag;
}
