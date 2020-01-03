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
    float S = 4 - 0.5 - 0.2 - 1.0 / 6;
    long T = 1;
    float current_accuracy = 1;
    int i = 1;
    while (current_accuracy >= accuracy)
    {
        T = T * 16;
        S = S + (float)1 / (T) * (4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6));

        current_accuracy = (float)1 / (T) * (4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6));

        i = i + 1;
    }   
    return S;
}