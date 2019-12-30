#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter two values a, b: ";
    cin >> a >> b;

    float min = a;
    if (b < min)
        min = b;

    cout << "The min value is " << min;
    return 0;
}