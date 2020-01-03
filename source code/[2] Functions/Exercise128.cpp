#include <iostream>
using namespace std;

void displayAscending(float, float);

int main()
{
	float a, b;

	cout << "Enter two values a, b: ";
	cin >> a >> b;

	displayAscending(a, b);

	return 0;
}

void displayAscending(float a, float b)
{

	if (a > b)
		swap(a, b);
	cout << "The acsending values is " << a << " " << b;
}
