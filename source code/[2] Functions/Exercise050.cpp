#include <iostream>
using namespace std;

int sum_divisor(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = sum_divisor(n);

    cout << "Sum all divisors is " << result;

    return 0;
}

int sum_divisor(int n)
{
    int S = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            S = S + i;
        }
        i = i + 1;
    }
    return S;
}