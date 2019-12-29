#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count = count + 1;
	}

	if (count == 2)
		cout << "Yes. It is prime number !";
	else
		cout << "No. It is not a prime number";

	return 0;

}
