#include <iostream>
using namespace std;

void solve_quaratic(float, float, float);

int main()
{
	float a, b, c;

	cout << "Enter three coefficients a, b, c: ";
	cin >> a >> b >> c;

	solve_quaratic(a, b, c);

	return 0;
}

void solve_quaratic(float a, float b, float c)
{
	float delta = b * b - 4 * a * c;
	if (delta < 0)
		cout << "Equation don't have any real solutions";
	else
		if (delta == 0)
		{
			float x = -b / (2 * a);
			cout << "Equation has only solution is " << x;
		}
		else
		{
			float x1, x2;
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			cout << "Equation has two solution are: \n";
			cout << x1 << "  " << x2;
		}
}
