#include <iostream>
using namespace std;

int main()
{
    float x;
    int n;

    cout << "Enter the float number x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = 1 - x;
    float numerator = x;
    int denominator = 1;
    int sign = 1;
    int i = 3;
    while (i <= 2 * n)
    {
        numerator = numerator * x * x;
        denominator = denominator * i * (i - 1);
        S = S + sign * numerator / denominator;
        sign = -sign;
        i = i + 2;
    }

    cout << "The sum is " << S;
    return 0;
}