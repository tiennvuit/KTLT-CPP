#include <iostream>
using namespace std;

int count_digits(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = count_digits(n);

    cout << "The number of digits is " << result;

    return 0;
}

int count_digits(int n)
{
    int count = 0;
    int m = n;
    while (m != 0)
    {
        count = count + 1;
        m = m / 10;
    }
    return count;
}