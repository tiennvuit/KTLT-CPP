#include <iostream>
using namespace std;

int sum_smaller(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = sum_smaller(n);

    cout << "Sum all smaller divisors is " << result;

    return 0;
}

int sum_smaller(int n)
{
    int S = 0;
    int i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            S = S + i;
        }
        i = i + 1;
    }
    return S;
}