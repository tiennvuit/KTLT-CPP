#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define NMAX 100

void input_array(int[], int&);
void print_array(int[], int);

int main()
{
	int a[NMAX];
	int n;

	srand(time(NULL));
	input_array(a, n);
	cout << endl;
	print_array(a, n);

	return 0;
}

void input_array(int a[], int& n)
{
	cout << "Enter the number of elements: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		int x = -100 + rand() % (200 + 1);
		a[i] = x;
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
