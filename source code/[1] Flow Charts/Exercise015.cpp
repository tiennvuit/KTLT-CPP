#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the value x: ";
    cin >> x;

    float x2 = x * x;
    float x3 = x2 * x;
    float x6 = x2 * x3;

    cout << "The result is " << fixed << x6;

    return 0;
}