#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;

    float S = 0;
    if (x >= 5)
        S = -2 * x * x * x + 6 * x + 9;
    else
        S = -2 * x * x + 4 * x - 9;

    cout << "The value of function at " << x << " is " << S;

    return 0;
}
