#include <iostream>
using namespace std;

#define pi 3.14159265359

int main()
{
    float r;
    cout << "Enter the radius of sphere: ";
    cin >> r;

    float S = 4 * pi * r * r;

    cout << "The surface area of this sphere is " << S;
    return 0;
}