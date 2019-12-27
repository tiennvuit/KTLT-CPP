#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the positive integer n: ";
    cin >> n;

    int count = 0;
    int m = n;
    while (m != 0)
    {
        int dv = m % 10;
        if(dv % 2 !=0)
        {
            count = count + 1;
        }
        m = m / 10;
    }

    cout << "The number of digits is " << count;

    return 0;
}