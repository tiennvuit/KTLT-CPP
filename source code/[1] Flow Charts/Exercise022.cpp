#include <iostream>
using namespace std;

int main()
{
    int n;

    cout <<"Enter the integer value n: ";
    cin >> n;

    int m = abs(n);
    int unit = m % 10;

    cout <<"The unit digit is " << unit;

    return 0;
}