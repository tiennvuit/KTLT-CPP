#include <iostream>
using namespace std;

int sum(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = sum(n);

    cout << "The sum is " << result;
    return 0;
}

int sum(int n)
{
    int S = 0;
    int T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * i;
        S = S + i * T;
        i = i + 1;
    }
    return S;
}