#include <iostream>
using namespace std;


float product(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    float result = product(n);

    cout << "The product is " << result;

    return 0;
}

float product(int n)
{
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * (1 + (float)1 / (n * n));
        i = i + 1;
    }
    return T;
}
