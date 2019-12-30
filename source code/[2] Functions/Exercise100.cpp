#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    float S = 0;
    int T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * i;
        S = pow(S + T, (float)1 / (i + 1));
        i = i + 1;
    }

    cout << "The sum is " << S;
    return 0;
}