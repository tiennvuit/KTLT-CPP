#include <iostream>
#include <iomanip>
using namespace std;

#define NMAX 100

void input_array(int[], int&);
void print_array(int[], int);
int firstDigit_is_odd(int);
void list(int[], int);

int main()
{
	int a[NMAX];
	int n;

	input_array(a, n);
	
	cout << "\nThe elements whose first digit is odd are: \n";
	list(a, n);

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

void print_array(int a[], int n)
{
	cout << "The number of elements is " << n << ": \n";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << setw(4) << a[i];
	}
}

int firstDigit_is_odd(int n)
{
	n = abs(n);
	while (n >= 10)
	{
		n = n / 10;
	}
	if (n % 2 != 0)
		return 1;
	return 0;
}

void list(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (firstDigit_is_odd(a[i]) == 1)
		{
			cout << setw(4) << a[i];
		}
	}
}