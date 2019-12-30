#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int S = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0 and i % 2 == 0)
        {
            S = S + i;
        }
        i = i + 1;
    }

    cout << "Sum all even divisors is " << S;

    return 0;
}