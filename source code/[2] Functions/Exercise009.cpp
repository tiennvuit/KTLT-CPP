#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.14159265359

float area(int, float);

int main()
{
	int n;
	float r;

	cout << "Enter the number of edges: ";
	cin >> n;
	cout << "Enter the radius: ";
	cin >> r;

	float result = area(n, r);

	cout << "The area of regular polygon is " << result;

	return 0;
}

float area(int n, float r)
{
	float S = (1.0 / 2) * n * r * r * sin(2 * pi / n);
	return S;
}
