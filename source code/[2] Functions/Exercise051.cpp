#include <iostream>
using namespace std;

int product_divisors(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = product_divisors(n);

    cout << "Product all divisors is " << result;

    return 0;
}

int product_divisors(int n)
{
    int T = 1;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            T = T * i;
        }
        i = i + 1;
    }
    return T;
}