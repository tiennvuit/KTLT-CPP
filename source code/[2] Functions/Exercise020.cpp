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
    float x5 = x3 * x2;
    float x7 = x5 * x2;
    float x14 = x7 * x7;    
    return x14;
}
