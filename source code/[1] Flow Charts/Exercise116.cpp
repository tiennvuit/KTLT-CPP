#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value n: ";
    cin >> n;

    int previous = 1;
    int current = 2;
    int i = 2;
    while (i <= n)
    {
        int temp = current;
        current = 4 * current + previous;
        previous = temp;
        i = i + 1;
    }

    cout << "The value of " << n << "th term is " << current;

    return 0;
}