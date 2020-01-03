#include <iostream>
using namespace std;

int sum_digits(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = sum_digits(n);

    cout << "Sum all digits is " << result;

    return 0;
}

int sum_digits(int n)
{
    int S = 0;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        S = S + dv;
        m = m / 10;
    }
    return S;
}