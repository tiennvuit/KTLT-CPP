#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the value x: ";
    cin >> x;

    float x2 = x * x;
    float x3 = x2 * x;
    float x5 = x3 * x2;
    float x7 = x5 * x2;
    float x14 = x7 * x7;

    cout << "The result is " << fixed << x14;

    return 0;
}