#include <iostream>
using namespace std;

int product(int);

int main()
{
    int n;

    cout << "Enter the integer n: ";
    cin >> n;

    int result = product(n);

    cout << "The product is " << result;
    return 0;
}

int product(int n)
{
    int T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * i;
        i = i + 1;
    }
    return T;
}