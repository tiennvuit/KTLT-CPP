#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter two values a, b: ";
    cin >> a >> b;

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    cout << "The values after absolute are " << a << " " << b;
    return 0;
}