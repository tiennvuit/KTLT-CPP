#include <iostream>
using namespace std;

#define pi 3.14159265359

float area(float);

int main()
{
	float r;
	cout << "Enter the radius of sphere: ";
	cin >> r;

	float result = area(r);

	cout << "The volume of circle is " << result;
	return 0;
}

float area(float r)
{
	float V = (4.0 / 3) * pi * r * r * r;
	return V;
}
