#include <iostream>
using namespace std;

int main()
{
    float x;
    int n;

    cout <<"Enter the float number x: ";
    cin >> x;
    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = x;
    float T = x;
    int i = 1;
    while (i <= n)
    {
        T = T * (x * x);
        S = S + T;
        i = i + 1;
    }

    cout << "The sum is " << S;

    return 0;
}
