#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    int n;

    cout <<"Enter the float value x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float T = x;
    int i = 1;
    while (i <= n)
    {
        T = T * (x+i);
        i = i + 1;
    }

    cout << "The product is " << T;
    return 0;
}