#include <iostream>
using namespace std;

int main()
{
    double x;
    int n;

    cout << "Enter the float value x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    double T = x;
    int i = 1;
    while (i <= n)
    {
        T = T * (x + i);
        i = i + 1;
    }

    cout << "The product is " << fixed << T;
    return 0;
}