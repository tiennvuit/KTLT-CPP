#include <iostream>
using namespace std;


float calculate(float);

int main()
{
    float x;

    cout << "Enter the value x: ";
    cin >> x;

    float result = calculate(x);

    cout << "The result is " << fixed << result;

    return 0;
}

float calculate(float x)
{
    float x2 = x * x;
    float x3 = x2 * x;
    float x6 = x3 * x3;
    float x12 = x6 * x6;
    float x13 = x12 * x;
    return x13;
}
