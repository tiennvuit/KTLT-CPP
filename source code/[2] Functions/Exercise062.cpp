#include <iostream>
#include <iomanip>
using namespace std;

int sum_even_digits(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = sum_even_digits(n);

    cout << "Sum all even digits is " << result;

    return 0;
}

int sum_even_digits(int n)
{
    int S = 0;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        if (dv % 2 == 0)
        {
            S = S + dv;
        }
        m = m / 10;
    }
    return S;
}