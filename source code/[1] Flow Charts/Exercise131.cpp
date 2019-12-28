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

    int flag = 1;
    if (!(abs(da - db) < dc && dc < da + db))
        flag = 0;

    if (flag == 0)
        cout << "No ! It is not a triangle";
    else
        cout << "Yes ! It is a triangle";

    return 0;
}