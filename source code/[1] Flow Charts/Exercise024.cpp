#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the integer value n: ";
    cin >> n;

    int m = abs(n);
    int temp = m / 10;
    temp = temp / 10;
    int leading = temp % 10;

    cout << "The leading digit is " << leading;

    return 0;
}