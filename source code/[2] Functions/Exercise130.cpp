#include <iostream>
#include <cmath>
using namespace std;

int checkTriangle(float, float, float);

int main()
{
    float x, y, z;

    cout << "Enter three magnitute edges of triangle: ";
    cin >> x >> y >> z;

    int result = checkTriangle(x, y, z);
    if (result == 0)
        cout << "No ! It is not a triangle";
    else
        cout << "Yes ! It is a triangle";

    return 0;
}

int checkTriangle(float x, float y, float z)
{
    int flag = 1;
    if (!(abs(x - y) < z && z < x + y))
        flag = 0;
    return flag;
}