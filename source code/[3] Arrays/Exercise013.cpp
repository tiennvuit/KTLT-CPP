#include <iostream>
#include <iomanip>
using namespace std;

#define NMAX 100

void input_array(int[], int&);
void print_array(int[], int);
int is_allEven(int);
void list(int[], int);

int main()
{
	int a[NMAX];
	int n;

	input_array(a, n);

	cout << "\nThe elements whose all digits is even are: \n";
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

int is_allEven(int n)
{
	n = abs(n);
	int flag = 1;
	while (n > 0)
	{
		int dv = n % 10;
		if (!(dv % 2 == 0))
			flag = 0;
		n = n / 10;
	}
	return flag;
}

void list(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (is_allEven(a[i]) == 1)
		{
			cout << setw(4) << a[i];
		}
	}
}