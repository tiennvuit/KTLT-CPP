#include <iostream>
using namespace std;

int main()
{
    int k, n;

    cout << "Enter the integer number k: ";
    cin >> k;
    cout << "Enter the integer number n: ";
    cin >> n;

    int S = 0;
    int i = 1;
    while (i <= n)
    {
        int T = 1;
        int j = 1;
        while (j <= k)
        {
            T = T * i;
            j = j + 1;
        }
        S = S + T;
        i = i + 1;
    }

    cout << "Sum is " << S;

    return 0;
}
