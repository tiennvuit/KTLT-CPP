#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value n: ";
    cin >> n;

    int current = 2;
    int i = 2;
    while (i <= n)
    {
        current = current + 2 * i + 1;
        i = i + 1;
    }

    cout << "The value of " << n << "th term is " << current;

    return 0;
}