#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int m = n;
	while (m >= 10)
		m = m / 10;

	cout << "The first digit of " << n <<" is " << m;

	return 0;
}
