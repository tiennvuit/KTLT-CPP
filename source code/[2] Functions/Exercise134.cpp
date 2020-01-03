#include <iostream>
using namespace std;

int check(float, float, float);

int main()
{
	float x, y, z;

	cout << "Enter three values x, y, z: ";
	cin >> x >> y >> z;

	int result = check(x, y, z);
	if (result == 0)
		cout << "False";
	else
		cout << "True";

	return 0;
}

int check(float x, float y, float z)
{
	int flag = 1;
	if (y < x)
		flag = 0;
	if (z < y)
		flag = 0;
	return flag;
}
