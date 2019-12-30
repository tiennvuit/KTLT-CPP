#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int S = 0;
    int m = n;
    while (m != 0)
    {
        int dv = m %10;
        if(dv % 2 == 0)
        {
            S = S + dv;
        }
        m = m / 10;
    }

    cout << "Sum all even digits is " << S;

    return 0;
}