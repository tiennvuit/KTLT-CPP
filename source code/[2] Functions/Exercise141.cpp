#include <iostream>
using namespace std;

int check_perfect_number(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	int result = check_perfect_number(n);

	if (result == 0)
		cout << "No. It is not a perfect number !";
	else
		cout << "Yes. It is a perfect number !";

	return 0;

}

int check_perfect_number(int n)
{
	int S = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			S = S + i;
		i = i + 1;
	}
	if (S == n)
		return 1;
	return 0;
}
