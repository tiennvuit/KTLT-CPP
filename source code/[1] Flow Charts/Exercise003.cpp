#include <iostream>
using namespace std;

#define pi 3.14159265359

int main()
{
    float r;
    cout << "Enter the radius of circle: ";
    cin >> r;

    float P = 2 * pi * r;

    cout << "The perimeter of circle is " << P;
    return 0;
}