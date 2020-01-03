#include <iostream>
using namespace std;

int check_leap_year(int);

int main()
{
    int x, y;

    cout << "Enter the start year: ";
    cin >> x;
    cout << "Enter the start year: ";
    cin >> y;

    cout << "The leap years belong to [" << x << ", " << y << "]\n";
    int i = x;
    while (i <= y)
    {
        int result = check_leap_year(i);
        if (result == 0)
            cout << i << endl;
        i = i + 1;
    }

    return 0;
}

int check_leap_year(int n)
{
    int flag = 0;
    if (n % 4 == 0 && n % 100 != 0)
        flag = 1;
    if (n % 400 == 0)
        flag = 1;
    return flag;
}