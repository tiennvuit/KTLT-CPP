#include <iostream>
#include <iomanip>
using namespace std;

#define NMAX 100

void input_array(float[], int&);
void print_array(float[], int);
void list_positive_number(float[], int);

int main()
{
	float a[NMAX];
	int n;

	input_array(a, n);
	cout << endl;

	cout << "The positive elements in arrays: ";
	list_positive_number(a, n);

	return 0;
}

void input_array(float a[], int& n)
{
	cout << "Enter the number of elements: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}

void print_array(float a[], int n)
{
	cout << "The number of elements is " << n << ": \n";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << fixed << setw(8) << setprecision(2) << a[i];
	}
}

void list_positive_number(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] > 0)
			cout << setw(4) << a[i];
	}
}
