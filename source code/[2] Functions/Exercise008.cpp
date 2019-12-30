#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.14159265359

float perimeter(int, float);

int main()
{
	int n;
	float r;

	cout << "Enter the number of edges: ";
	cin >> n;
	cout << "Enter the radius: ";
	cin >> r;

	float result = perimeter(n, r);

	cout << "The perimeter of regular polygon is " << result;

	return 0;
}

float perimeter(int n, float r)
{
	float P = 2 * n * r * sin(pi / n);
	return P;
}
