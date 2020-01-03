#include <iostream>
using namespace std;

float sum(float, int);

int main()
{
    float x;
    int n;

    cout << "Enter the float number x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float result = sum(x, n);

    cout << "The sum is " << result;

    return 0;
}

float sum(float x, int n)
{
    float S = 1 + x;
    float numerator = x;
    int denominator = 1;
    int i = 3;
    while (i <= 2 * n + 1)
    {
        numerator = numerator * x * x;
        denominator = denominator * (i - 1) * i;
        S = S + numerator / denominator;
        i = i + 2;
    }
    return S;
}