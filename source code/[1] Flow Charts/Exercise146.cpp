#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int m = n;
	int flag = 1;
	while (m != 0)
	{
		int dv = m % 10;
		if (!(dv % 2 == 0))
			flag = 0;
		m = m / 10;
	}

	if(flag == 0)
		cout << "No. The digits are not even numbers !";
	else
		cout << "Yes. The digits are even numbers !";

	return 0;
}
