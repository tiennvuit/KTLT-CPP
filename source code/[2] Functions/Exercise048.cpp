#include <iostream>
using namespace std;

float sum(float, int);

int main()
{
    float x;
    int n;

    cout << "Enter the float value x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float result = sum(x, n);

    cout << "The product is " << result;
    return 0;
}

float sum(float x, int n)
{
    float T = x;
    int i = 1;
    while (i <= n)
    {
        T = T * (x + i);
        i = i + 1;
    }
    return T;
}