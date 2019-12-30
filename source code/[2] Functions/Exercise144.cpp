#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int m = n;
	int reverse = 0;
	while (m != 0)
	{
		int dv = m % 10;
		reverse = reverse * 10 + dv;
		m = m / 10;
	}

	if(n != reverse)
		cout << "No. It is not symmetric number";
	else
		cout << "Yes. It is symmetric number !";

	return 0;
}
