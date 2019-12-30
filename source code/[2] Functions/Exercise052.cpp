#include <iostream>
using namespace std;

int count_divisors(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = count_divisors(n);

    cout << "The number of divisors is " << result;

    return 0;
}

int count_divisors(int n)
{
    int count = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
        i = i + 1;
    }
    return count;
}