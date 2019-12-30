#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the positive integer n: ";
	cin >> n;

	int flag = 0;
	int i = 0;
	while(i <= n)
	{
		if (i * i == n)
			flag = 1;
		i = i + 1;
	}

	if (flag == 0)
		cout << "No. It is not a square root number";
	else
		cout << "Yes. It is square root number !";

	return 0;
}
