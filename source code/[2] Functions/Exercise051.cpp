#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

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

    cout << "Product all divisors is " << T;

    return 0;
}