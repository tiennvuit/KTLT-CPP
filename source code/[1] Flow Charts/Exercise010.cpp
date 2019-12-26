#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float xA, xB, xC;
    float yA, yB, yC;

    cout << "Enter the coordinate of vertex A: ";
    cin >> xA >> yA;
    cout << "Enter the coordinate of vertex B: ";
    cin >> xB >> yB;
    cout << "Enter the coordinate of vertex C: ";
    cin >> xC >> yC;

    float da = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
    float db = sqrt((xA - xC) * (xA - xC) + (yA - yC) * (yA - yC));
    float dc = sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));

    float P = da + db + dc;

    cout << "The perimeter of triangle is " << P;

    return 0;
}