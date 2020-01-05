#include <iostream>
#include <iomanip>
using namespace std;

#define NMAX 100

void input_array(int[], int&);

int main()
{
	int a[NMAX];
	int n;

	input_array(a, n);

	return 0;
}

void input_array(int a[], int& n)
{
	cout << "Enter the number of elements: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}