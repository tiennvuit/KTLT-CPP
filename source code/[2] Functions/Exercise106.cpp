#include <iostream>
using namespace std;

#define pi 3.14159265359

float calculate_sin(float);

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;
    // Convert degrees to radian
    x = x * pi / 180;

    float result = calculate_sin(x);

    cout << "The value sin(" << x << ") is " << result;
    return 0;
}

float calculate_sin(float x)
{
    float S = x;
    float numerator = x;
    int denominator = 1;
    int sign = -1;
    float accuracy = 1;
    int i = 3;
    while (accuracy >= 10e-6)
    {
        numerator = numerator * x * x;
        denominator = denominator * i * (i - 1);
        S = S + sign * numerator / denominator;
        sign = -sign;

        accuracy = (float)1 / denominator;

        i = i + 2;
    }
    return S;
}