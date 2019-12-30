#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = 0;
    int denominator = 0;
    int i = 1;
    while (i <= n)
    {
        denominator = denominator + i;
        S = S + (float)1 / denominator;
        i = i + 1;
    }
    S = n / S;

    cout << "The sum is " << S;

    return 0;
}