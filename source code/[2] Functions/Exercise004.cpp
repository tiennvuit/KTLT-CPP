#include <iostream>
using namespace std;

#define pi 3.14159265359

float surface_area(float);

int main()
{
	float r;
	cout << "Enter the radius of sphere: ";
	cin >> r;

	float result = surface_area(r);

	cout << "The surface area of this sphere is " << result;
	return 0;
}

float surface_area(float r)
{
	float S = 4 * pi * r * r;
	return S;
}
