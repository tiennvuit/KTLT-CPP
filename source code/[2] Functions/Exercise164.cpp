#include <iostream>
using namespace std;

float sum(int);

int main()
{
	int n;

	cout << "Enter positive integer n: ";
	cin >> n;

	float result = sum(n);

	cout << "The result is " << fixed << result;

	return 0;
}

float sum(int n)
{
	float S = 1;
	int i = 1;
	while (i <= n)
	{
		S = 1 + 1 / (1 + S);
		i = i + 1;
	}	
	return S;
}
