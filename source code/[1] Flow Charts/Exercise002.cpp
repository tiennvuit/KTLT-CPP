#include <iostream>
using namespace std;

#define pi 3.14159265359

int main()
{
    float r;
    cout << "Enter the radius of circle: ";
    cin >> r;

    float S = pi * r * r;

    cout << "The area of this circle: " << S;
    return 0;
}