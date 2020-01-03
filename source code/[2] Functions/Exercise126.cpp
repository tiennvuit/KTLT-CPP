#include <iostream>
using namespace std;

float find_max(float, float);

int main()
{
	float a, b;

	cout << "Enter two values a, b: ";
	cin >> a >> b;
	
	float result = find_max(a, b);

	cout << "The max value is " << result;
	return 0;
}

float find_max(float a, float b)
{
	if (a > b)
		return a;
	return b;
}