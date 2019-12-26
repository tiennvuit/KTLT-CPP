#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.14159265359

int main()
{
    int n;
    float r;

    cout << "Enter the number of edges: ";
    cin >> n;
    cout << "Enter the radius: ";
    cin >> r;

    float S = (1.0 / 2) * n * r * r * sin(2 * pi / n);

    cout << "The area of regular polygon is " << S;

    return 0;
}