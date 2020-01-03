#include <iostream>
using namespace std;

int check_exist_odd(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = check_exist_odd(n);

    if (result == 0)
        cout << "There are no odd digits !";
    else
        cout << "Even odd digits exist !!";

    return 0;
}

int check_exist_odd(int n)
{
    int flag = 0;
    while (n != 0)
    {
        int dv = n % 10;
        if (dv % 2 != 0)
        {
            flag = 1;
        }
        n = n / 10;
    }
    return flag;
}