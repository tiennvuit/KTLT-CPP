#include <iostream>
using namespace std;

float sum(float, int);

int main()
{
    float x;
    int n;

    cout << "Enter the float number x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float result = sum(x, n);

    cout << "The sum is " << result;
    return 0;
}

float sum(float x, int n)
{
    float S = 1 / x;
    float T = x;
    int i = 1;
    while (i <= n)
    {
        T = T * (x + i);
        S = S + 1 / T;
        i = i + 1;
    }
    return S;
}