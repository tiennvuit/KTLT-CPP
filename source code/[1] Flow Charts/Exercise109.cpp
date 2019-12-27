#include <iostream>
using namespace std;

int main()
{
    float S = 1;
    int denominator = 1;
    float accuracy = 1;
    int i = 1;
    // Xem lại định nghĩa độ chính xác trong khai triển Taylor
    while (accuracy >= 10e-6)
    {
        denominator = denominator * i;
        S = S + (float)1 / denominator;

        accuracy = (float)1 / denominator;

        i = i + 1;
    }

    cout << "The value e is " << S;
    return 0;
}