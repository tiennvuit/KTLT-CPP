#include <iostream>
using namespace std;

float convert(float);

int main()
{
	float F;
	cout << "Enter the degrees Fahrenheit: ";
	cin >> F;

	float result = convert(F);

	cout << "The value to be converted to degrees Celsius is " << result;

	return 0;
}

float convert(float F)
{
	float C = (5.0 / 9) * F - 32;
	return C;
}
