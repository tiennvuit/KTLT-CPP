#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, z;

    cout << "Enter three magnitute edges of triagnle: ";
    cin >> x >> y >> z;

    int flag = 1;
    if (x == y || x == z || y == z)
    {
        if (x == y && y == z)
            flag = 2;
        if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
            flag = 3;
        flag = 4;
    }
    else if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
    {
        flag = 5;
    }
    else if (!(abs(y - z) < x && x < y + z))
    {
        flag = 0;
    }

    switch (flag)
    {
    case 0:
        cout << "Not a triangle !";
        break;
    case 1:
        cout << "This is a formal triangle !";
        break;
    case 2:
        cout << "This is quilateral triangle";
        break;
    case 3:
        cout << "Tam giac triangle right angle";
        break;
    case 4:
        cout << "This isosceles triangle";
        break;
    case 5:
        cout << "This is square triangle";
        break;
    }

    return 0;
}