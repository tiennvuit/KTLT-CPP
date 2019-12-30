#include <iostream>
using namespace std;

float sum(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    float result = sum(n);

    cout << "The sum is " << result;
    return 0;
}

float sum(int n)
{
    float S = 0;
    int i = 1;
    while (i <= n)
    {
        S = S + (float)1 / (2 * i);
        i = i + 1;
    }
    return S;
}