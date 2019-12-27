#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int m = n;
    int flag = 0;
    while (m != 0)
    {
        int dv = m % 10;
        if (dv % 2 != 0)
        {
            flag = 1;
        }
        m = m / 10;
    }
    if (flag == 0)
        cout << "There are no odd digits !";
    else
        cout << "Even odd digits exist !!";

    return 0;
}