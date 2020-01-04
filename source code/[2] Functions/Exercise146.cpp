#include <iostream>
using namespace std;

int check_evens(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	int result = check_evens(n);

	if (result == 0)
		cout << "No. The digits are not even numbers !";
	else
		cout << "Yes. The digits are even numbers !";

	return 0;
}

int check_evens(int n)
{
	int flag = 1;
	while (n != 0)
	{
		int dv = n % 10;
		if (!(dv % 2 == 0))
			flag = 0;
		n = n / 10;
	}
	return flag;
}
