#include <iostream>
using namespace std;

int product_odd_digits(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = product_odd_digits(n);

    cout << "Product all odd digits is " << result;

    return 0;
}

int product_odd_digits(int n)
{
    int T = 1;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        if (dv % 2 != 0)
        {
            T = T * dv;
        }
        m = m / 10;
    }
    return T;
}