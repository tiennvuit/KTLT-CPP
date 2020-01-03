#include <iostream>
using namespace std;

float exponential(float);

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;

    float result = exponential(x);

    cout << "The value e^(" << x << ") is " << result;
    return 0;
}

float exponential(float x)
{
    float S = 1;
    float numerator = 1;
    int denominator = 1;
    float accuracy = 1;
    int i = 1;
    while (accuracy >= 10e-6)
    {
        numerator = numerator * x * x;
        denominator = denominator * i;
        S = S + numerator / denominator;

        accuracy = (float)1 / denominator;

        i = i + 1;
    }
    return S;
}