#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the value x: ";
    cin >> x;

    // Có vấn đề
    float x2 = x * x;
    float x3 = x2 * x;
    float x6 = x3 * x3;
    float x12 = x6 * x6;
    float x13 = x12 * x;

    cout << "The result is " << fixed << x13;

    return 0;
}