#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int reverse = 0;
	int m = n;
	while(m != 0)
	{
		int dv = m % 10;
		reverse = reverse * 10 + dv;
		m = m / 10;
	}

	cout << "The reverse number of " << n <<" is " << reverse;

	return 0;
}
