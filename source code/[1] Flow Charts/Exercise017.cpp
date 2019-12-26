#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the value x: ";
    cin >> x;

    // có vấn đề 
    float x2 = x * x;
    float x3 = x2 * x;
    float x5 = x3 * x2;
    float x10 = x5 * x5;
    float x11 = x10 * x;

    cout << "The result is " << fixed << x11;

    return 0;
}