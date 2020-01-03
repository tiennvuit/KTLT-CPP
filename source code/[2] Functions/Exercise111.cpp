#include <iostream>
using namespace std;

float calculate_pi(float);

int main()
{
    float accuracy = 10e-6;

    float result = calculate_pi(accuracy);

    cout << "The value pi is " << result;

    return 0;
}

float calculate_pi(float accuracy)
{
    float S = 3;
    int sign = 1;
    float current_accuracy = 1;
    int i = 1;
    // Xem lại định nghĩa độ chính xác trong khai triển Taylor
    while (current_accuracy >= accuracy)
    {
        S = S + sign * (float)4 / (2 * i * (2 * i + 1) * (2 * i + 2));
        sign = -sign;

        current_accuracy = (float)1 / (2 * i * (2 * i + 1) * (2 * i + 2));

        i = i + 1;
    }
    return S;
}