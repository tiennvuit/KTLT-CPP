#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = 0;
    int i = 2;
    while (i <= n)
    {
        S = pow(S + i, (float)1 / i);
        i = i + 1;
    }

    cout << "The sum is " << S;
    return 0;
}