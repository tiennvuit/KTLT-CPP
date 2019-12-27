#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int T = 1;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        T = T * dv;
        m = m / 10;
    }

    cout << "The product all digits is " << T;

    return 0;
}