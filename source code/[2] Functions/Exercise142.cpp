#include <iostream>
using namespace std;

int check_prime_number(int);

int main()
{
	int n;

	cout << "Enter the positive integer n: ";
	cin >> n;

	int result = check_prime_number(n);

	if(result == 0)
		cout << "Yes. It is prime number !";
	else
		cout << "No. It is not a prime number";

	return 0;
}

int check_prime_number(int n)
{
	int count = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			count = count + 1;
		i = i + 1;
	}	
	if (count == 2)
		return 1;
	return 0;
}
