#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the integer n: ";
    cin >> n;

    int T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * i;
        i = i + 1;
    }

    cout << "The product is " << T;
    return 0;
}