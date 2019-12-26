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

    float P = 2 * n * r * sin(pi / n);

    cout << "The perimeter of regular polygon is " << P;

    return 0;
}