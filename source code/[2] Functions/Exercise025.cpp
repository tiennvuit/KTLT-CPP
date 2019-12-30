#include <iostream> 
using namespace std;

void swaps(int&, int&);

int main()
{
	int a, b;

	cout << "Enter two values a and b: ";
	cin >> a >> b;

	swaps(a, b);

	cout << "Two values a and b after swaped is " << a << " " << b;
	return 0;
}

void swaps(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}