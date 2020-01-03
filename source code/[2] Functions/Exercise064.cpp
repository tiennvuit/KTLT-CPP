#include <iostream>
using namespace std;

int find_max_digit(int);

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int result = find_max_digit(n);

    cout << "The max digit is " << result;

    return 0;
}

int find_max_digit(int n)
{
    int lc = n % 10;
    while (n != 0)
    {
        int dv = n % 10;
        if (dv > lc)
        {
            lc = dv;
        }
        n = n / 10;
    }   
    return lc;
}  