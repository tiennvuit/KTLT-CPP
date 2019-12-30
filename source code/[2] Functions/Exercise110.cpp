#include <iostream>
using namespace std;

int main()
{
    float S = 4;
    int sign = -1;
    float accuracy = 1;
    int i = 1;
    // Xem lại định nghĩa độ chính xác trong khai triển Taylor
    while (accuracy >= 10e-6)
    {
        S = S + sign * (float)4 / (2 * i + 1);
        sign = -sign;

        accuracy = (float)1 / (2 * i + 1);

        i = i + 1;
    }

    cout << "The value pi is " << S;
    return 0;
}