#include <iostream>
using namespace std;

int main()
{
    float x;
    int n;

    cout <<"Enter the float value x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    double T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * x;
        i = i + 1;
    }

    cout << "The product is " << fixed << T;
    return 0;
}