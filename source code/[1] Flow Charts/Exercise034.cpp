#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the integer n: ";
    cin >> n;

    float S = 0;
    int i = 1;
    while (i <= n)
    {
        S = S + (float)(2 * i + 1) / (2 * i + 2);
        i = i + 1;
    }

    cout << "The sum is " << S;
    return 0;
}