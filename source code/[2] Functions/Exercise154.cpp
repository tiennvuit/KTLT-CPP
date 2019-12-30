#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter integer number n: ";
	cin >> n;

	int current = n;
	cout << current << "  ";
	while(current != 1)
	{
		if (current % 2 == 0)
			current = current / 2;
		else
			current = 3 * current + 1;
		cout << current << "  ";
	}

	return 0;
}