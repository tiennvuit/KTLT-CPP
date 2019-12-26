#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the value x: ";
    cin >> x;

    float x2 = x * x;
    float x3 = x2 * x;
    float x6 = x3 * x3;
    float x7 = x6 * x;

    cout << "The result is " << fixed << x7;

    return 0;
}