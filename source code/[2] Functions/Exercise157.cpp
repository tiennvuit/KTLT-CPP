#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;
	
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + (float)1 / i;
		cout << fixed << setw(6) << setprecision(2) << S << "  ";
		i = i + 1;
	}
	return 0;
}