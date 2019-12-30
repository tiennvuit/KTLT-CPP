#include <iostream>
using namespace std;

#define pi 3.14159265359

float perimeter(float);

int main()
{
	float r;
	cout << "Enter the radius of circle: ";
	cin >> r;

	float result = perimeter(r);

	cout << "The perimeter of circle is " << result;
	return 0;
}

float perimeter(float r)
{
	float P = 2 * pi * r;
	return P;
}
