#include <iostream>
using namespace std;

float find_min(float, float);

int main()
{
	float a, b;

	cout << "Enter two values a, b: ";
	cin >> a >> b;
	
	float result = find_min(a, b);

	cout << "The min value is " << result;
	return 0;
}

float find_min(float a, float b)
{
	if (a < b)
		return a;
	return b;
}