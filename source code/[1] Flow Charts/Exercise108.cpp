#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter the float number x: ";
    cin >> x;

    float S = 1;
    float numerator = 1;
    int denominator = 1;
    float accuracy = 1;
    int i = 1;
    // Xem lại định nghĩa độ chính xác trong khai triển Taylor
    while (accuracy >= 10e-6)
    {
        numerator = numerator * x * x;
        denominator = denominator * i;
        S = S + numerator / denominator;

        accuracy = (float)1 / denominator;
        
        i = i + 1;
    }

    cout << "The value e^(" << x << ") is " << S;
    return 0;
}