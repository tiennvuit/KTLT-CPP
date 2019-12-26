#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cin >> x;
	cin >> y;
	float d = sqrt(x * x + y * y);
	cout << "Distance is " << d;
	return 0;
}