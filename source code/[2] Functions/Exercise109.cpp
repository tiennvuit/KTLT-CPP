#include <iostream>
using namespace std;

float calculate_e(float);

int main()
{
    float accuracy = 10e-6;

    float result = calculate_e(accuracy);

    cout << "The value e is " << accuracy;

    return 0;
}

float calculate_e(float accuracy)
{
    float S = 1;
    int denominator = 1;
    float current_accuracy = 1;
    int i = 1;
    while (current_accuracy >= accuracy)
    {
        denominator = denominator * i;
        S = S + (float)1 / denominator;

        current_accuracy = (float)1 / denominator;

        i = i + 1;
    }
    return S;
}