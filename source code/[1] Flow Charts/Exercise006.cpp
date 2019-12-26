#include <iostream>
using namespace std;

int main()
{
    float C;
    cout <<"Enter the degrees Celsius: ";
    cin >> C;

    float F = (9.0/5) * C + 32;

    cout <<"The value to be converted to degrees Fahrenheit is " << F;
    return 0;
}