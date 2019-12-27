#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int S = 0;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        S = S + dv;
        m = m / 10;
    }

    cout << "Sum all digits is " << S;

    return 0;
}