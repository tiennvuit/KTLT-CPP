#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.14159265359

float sum(float, int);

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

    float result = sum(x, n);

    cout << "The sum is " << result;
    return 0;
}

float sum(float x, int n)
{
    float S = sin(x);
    float T = sin(x);
    int i = 2;
    while (i <= n)
    {
        T = sin(T);
        S = S + T;
        i = i + 1;
    }
    return S;
}
