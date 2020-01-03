#include <iostream>
using namespace std;

int count_odd_digits(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = count_odd_digits(n);

    cout << "The number of odd digits is " << result;

    return 0;
}

int count_odd_digits(int n)
{
    int count = 0;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        if (dv % 2 != 0)
        {
            count = count + 1;
        }
        m = m / 10;
    }
    return count;
}
