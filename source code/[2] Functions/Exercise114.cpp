#include <iostream>
using namespace std;

int calculate_nth(int);

int main()
{
    int n;

    cout << "Enter the value n: ";
    cin >> n;

    int result = calculate_nth(n);

    cout << "The value of " << n << "th term is " << result;

    return 0;
}

int calculate_nth(int n)
{
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
    return current;
}