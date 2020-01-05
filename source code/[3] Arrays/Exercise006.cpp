#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;

#define NMAX 100

void input_array(float[], int&);
void print_array(float[], int);

int main()
{
	float a[NMAX];
	int n;

	srand(time(NULL));
	input_array(a, n);
	cout << endl;
	print_array(a, n);

	return 0;
}

void input_array(float a[], int& n)
{
	cout << "Enter the number of elements: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		float x = -100 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (100 - (-100))));
		a[i] = x;
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
