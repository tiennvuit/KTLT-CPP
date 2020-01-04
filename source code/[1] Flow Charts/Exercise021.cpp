#include <iostream>
using namespace std;

int main()
{
    double x;

    cout << "Enter the value x: ";
    cin >> x;

    double x2 = x * x;
    double x4 = x2 * x2;
    double x8 = x4 * x4;
    double x16 = x8 * x8;
    double x15 = x16 / x;

    cout << "The result is " << fixed << x15;

    return 0;
}