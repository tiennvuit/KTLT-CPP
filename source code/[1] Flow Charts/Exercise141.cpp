#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int S = 0;
	int i = 1;
	while(i < n)
	{
		if (n % i == 0)
			S = S + i;
		i = i + 1;
	}

	if (S == n)
		cout << "Yes. It is a perfect number !";
	else
		cout << "No. It is not a perfect number !";

	return 0;

}