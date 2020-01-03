#include <iostream>
using namespace std;

void absolute(float&);

int main()
{
	float a, b;

	cout << "Enter two values a, b: ";
	cin >> a >> b;

	absolute(a);
	absolute(b);

	cout << "The values after absolute are " << a << " " << b;
	return 0;
}

void absolute(float& n)
{
	if (n < 0)
		n = -n;
}
