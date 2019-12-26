#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, y1, x2, y2;
	cout << "Enter the first point: ";
	cin >> x1 >> y1;
	cout << "\nEnter the second point: ";
	cin >> x2 >> y2;

	float d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	cout << "\nDistance between two points: " << d << endl;

	return 0;
}