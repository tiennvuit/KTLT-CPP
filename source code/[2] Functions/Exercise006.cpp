#include <iostream>
using namespace std;

float convert(float);

int main()
{
	float C;
	cout << "Enter the degrees Celsius: ";
	cin >> C;

	float result = convert(C);

	cout << "The value to be converted to degrees Fahrenheit is " << result;

	return 0;
}

float convert(float C)
{
	float F = (9.0 / 5) * C + 32;
	return F;
}
