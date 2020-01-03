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
    int current = 2;
    int i = 2;
    while (i <= n)
    {
        current = current + 2 * i + 1;
        i = i + 1;
    }
    return current;
}
