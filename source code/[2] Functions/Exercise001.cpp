#include <iostream>
#include <cmath>
using namespace std;

float distance(float, float, float, float);

int main()
{
	float x1, y1, x2, y2;
	cout << "Enter the first point: ";
	cin >> x1 >> y1;
	cout << "\nEnter the second point: ";
	cin >> x2 >> y2;

	float result = distance(x1, y1, x2, y2);

	cout << "\nDistance between two points: " << result << endl;

	return 0;
}

float distance(float x1, float y1, float x2, float y2)
{
	float d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return d;
}