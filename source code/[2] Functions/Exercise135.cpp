#include <iostream>
using namespace std;

int check_leap_year(int);

int main()
{
    int n;

    cout << "Enter year n: ";
    cin >> n;

    int result = check_leap_year(n);
    if (result == 0)
        cout << "No. It isn't a leap year";
    else
        cout << "Yes. It is a leap year.";

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
