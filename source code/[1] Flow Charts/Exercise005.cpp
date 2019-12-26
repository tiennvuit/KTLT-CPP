#include <iostream>
using namespace std;

#define pi 3.14159265359

int main()
{
    float r;
    cout << "Enter the radius of sphere: ";
    cin >> r;

    float V = (4.0/3) * pi * r * r * r;

    cout << "The volume of circle is " << V;
    return 0;
}