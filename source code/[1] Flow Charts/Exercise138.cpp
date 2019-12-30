#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;

    float S = 0;
    if (x < 0)
        S = -2 * x * x * x + 6 * x + 9;
    else
        if (x <= 1)
            S = 5 * x - 7;
        else
            S = 2 * x * x * x + 5 * x * x - 8 * x - 3;

    cout << "The value of function at " << x << " is " << S;

    return 0;
}
