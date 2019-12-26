#include <iostream>
using namespace std;

int main()
{
    float F;
    cout <<"Enter the degrees Fahrenheit: ";
    cin >> F;

    float C = (5.0/9) * F - 32;

    cout <<"The value to be converted to degrees Celsius is " << C;
    
    return 0;
}