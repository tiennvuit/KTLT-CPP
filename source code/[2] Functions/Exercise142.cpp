#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int count = 0;
	int i = 1;
	while(i <= n)
	{
		if (n % i == 0)
			count = count + 1;
		i = i + 1;
	}

	if (count == 2)
		cout << "Yes. It is prime number !";
	else
		cout << "No. It is not a prime number";

	return 0;
}
