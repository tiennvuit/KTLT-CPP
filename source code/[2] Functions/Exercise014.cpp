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
    float x4 = x2 * x2;
    float x8 = x4 * x4;
    float x16 = x8 * x8;
    float x32 = x16 * x16;
    float x64 = x32 * x32;
    return x64;
}
