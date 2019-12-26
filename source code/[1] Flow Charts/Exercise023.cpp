#include <iostream>
using namespace std;

int main()
{
    int n;

    cout <<"Enter the integer value n: ";
    cin >> n;

    int m = abs(n);
    int temp = m / 10;
    int tens = temp % 10;

    cout <<"The tens digit is " << tens;

    return 0;
}