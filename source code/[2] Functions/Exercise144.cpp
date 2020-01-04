#include <iostream>
using namespace std;

int check_symmetric(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	int result = check_symmetric(n);

	if (result == 0)
		cout << "No. It is not symmetric number";
	else
		cout << "Yes. It is symmetric number !";

	return 0;
}

int check_symmetric(int n)
{
	int reverse = 0;
	while (n != 0)
	{
		int dv = n % 10;
		reverse = reverse * 10 + dv;
		n = n / 10;
	}

	if (n != reverse)
		return 0;
	return 1;
}
