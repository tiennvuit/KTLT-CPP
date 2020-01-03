#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, z;

    cout <<"Enter three magnitute edges of triangle: ";
    cin >> x >> y >> z;

    int flag = 1;
    if (!(abs(x - y) < z && z < x + y))
        flag = 0;

    if (flag == 0)
        cout << "No ! It is not a triangle";
    else
        cout << "Yes ! It is a triangle";

    return 0;
}