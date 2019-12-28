#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value n: ";
    cin >> n;

    int current = -2;
    int T3 = 3;
    int T7 = 7;

    int i = 2;
    while (i <= n)
    {
        T3 = T3 * 3;
        T7 = T7 * 7;
        current = 5 * current + 2 * T3 - 6 * T7 + 12;
        i = i + 1;
    }

    cout << "The value of " << n << "th term is " << current;

    return 0;
}