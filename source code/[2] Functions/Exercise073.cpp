#include <iostream>
using namespace std;

int main()
{
    float x;
    int n;

    cout << "Enter the float number x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = 0;
    float numerator = 1;
    int denominator = 0;
    int i = 1;
    while (i <= n)
    {
        numerator = numerator * x;
        denominator = denominator + i;
        S = S + numerator / denominator;
        i = i + 1;
    }

    cout << "The sum is " << S;

    return 0;
}
