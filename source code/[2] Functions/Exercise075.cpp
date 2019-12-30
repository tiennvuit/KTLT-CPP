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

    float S = 1;
    float numerator = 1;
    int denominator = 1;
    int i = 2;
    while (i <= 2 * n)
    {
        numerator = numerator * x * x;
        denominator = denominator * (i - 1) * i;
        S = S + numerator / denominator;
        i = i + 2;
    }

    cout << "The sum is " << S;

    return 0;
}
