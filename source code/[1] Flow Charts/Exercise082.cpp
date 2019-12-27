#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.14159265359

int main()
{
    float x;
    int n;

    cout << "Enter the float number x: ";
    cin >> x;
    // Convert degress to radian
    x = x * pi / 180;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = 0;
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * sin(x);
        S = S + T;
        i = i + 1;
    }

    cout << "The sum is " << S;
    return 0;
}