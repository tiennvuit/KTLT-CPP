#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter two values a, b: ";
    cin >> a >> b;

    float max = a;
    if (b > max)
        max = b;

    cout << "The max value is " << max;
    return 0;
}