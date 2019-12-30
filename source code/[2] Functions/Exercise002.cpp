#include <iostream>
using namespace std;

#define pi 3.14159265359

float area(float);

int main()
{
	float r;
	cout << "Enter the radius of circle: ";
	cin >> r;

	float result = area(r);

	cout << "The area of this circle: " << result;
	return 0;
}

float area(float r)
{
	float S = pi * r * r;
	return S;
}
