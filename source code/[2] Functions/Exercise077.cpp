#include <iostream>
using namespace std;

float sum(int, int);

int main()
{
    int k, n;

    cout << "Enter the integer number k: ";
    cin >> k;
    cout << "Enter the integer number n: ";
    cin >> n;

    float result = sum(k, n);

    cout << "Sum is " << result;

    return 0;
}

float sum(int k, int n)
{
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
    return S;
}