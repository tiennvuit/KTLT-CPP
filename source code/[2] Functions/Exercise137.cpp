#include <iostream>
using namespace std;

float calculate(float);

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;

    float S = calculate(x);

    cout << "The value of function at " << x << " is " << S;

    return 0;
}

float calculate(float x)
{
    float S = 0;
    if (x >= 5)
        S = -2 * x * x * x + 6 * x + 9;
    else
        S = -2 * x * x + 4 * x - 9;
    return S;
}
