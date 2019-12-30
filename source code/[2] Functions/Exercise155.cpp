#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;
	
	int T = 2;
	int i = 1;
	while (i <= n)
	{
		T = T * 2;
		cout << T << "  ";
		i = i + 1;
	}
	return 0;
}