#include <iostream>
using namespace std;

int main()
{
	float x, y, z;

	cout <<"Enter three values x, y, z: ";
	cin >> x >> y >> z;

	int flag = 1;
	if(y < x)
		flag = 0;
	if(z < y)
		flag = 0;
	
	if(flag == 0)
		cout << "False";
	else
		cout << "True";

	return 0;
}
