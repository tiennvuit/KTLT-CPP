#include <iostream>
using namespace std;

#define pi 3.14159265359

float calculate_cos(float);

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;
    // Convert degrees to radian
    x = x * pi / 180;

    float result = calculate_cos(x);

    cout << "The value cos(" << x << ") is " << result;
    return 0;
}

float calculate_cos(float x)
{
    float S = 1;
    float numerator = 1;
    int denominator = 1;
    int sign = -1;
    float accuracy = 1;
    int i = 2;
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