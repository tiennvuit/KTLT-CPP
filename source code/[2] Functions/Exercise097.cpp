#include <iostream>
#include <cmath>
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
    float S = 0;
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * x;
        S = sqrt(S + T);
        i = i + 1;
    }
    return S;
}