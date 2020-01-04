#include <iostream>
using namespace std;

void solve_equation(float, float);

int main()
{
	float a, b;

	cout << "Enter coefficients a, b: ";
	cin >> a >> b;

	solve_equation(a, b);

	return 0;
}

void solve_equation(float a, float b)
{
	if (a == 0)
		if (b == 0)
			cout << "The equation have infinity solutions";
		else
			cout << "The equation don't have any solutions";
	else
	{
		float x = -b / a;
		cout << "The solutions of equation is " << x;
	}
}
