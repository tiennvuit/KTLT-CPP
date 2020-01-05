#include <iostream>
#include <iomanip>
using namespace std;

#define NMAX 100

void input_array(int[], int&);
void print_array(int[], int);
void list_even_number(int[], int);

int main()
{
	int a[NMAX];
	int n;

	input_array(a, n);
	cout << endl;

	cout << "The even elements in array are: \n";
	list_even_number(a, n);

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

void list_even_number(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0)
			cout << setw(4) << a[i];
	}
}
