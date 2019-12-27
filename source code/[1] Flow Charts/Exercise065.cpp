#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int m = n;
    int lc = m % 10;
    while (m != 0)
    {
        int dv = m % 10;
        if(dv < lc)
        {
            lc = dv;
        }
        m = m / 10;
    }

    cout << "The min digit is " << lc;

    return 0;
}