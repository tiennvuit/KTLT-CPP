#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * (1 + (float)1 / (n * n));
        i = i + 1;
    }

    cout << "The product is " << T;
    return 0;
}