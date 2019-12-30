#include <iostream>
using namespace std;

float product(float, int);
int main()
{
    float x;
    int n;

    cout << "Enter the float value x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float result = product(x, n);

    cout << "The product is " << result;

    return 0;
}

float product(float x, int n)
{
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * x;
        i = i + 1;
    }
    return T;
}
