#include <iostream>
using namespace std;

int product_digits(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = product_digits(n);

    cout << "The product all digits is " << result;

    return 0;
}

int product_digits(int n)
{
    int T = 1;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        T = T * dv;
        m = m / 10;
    }
    return T;
}