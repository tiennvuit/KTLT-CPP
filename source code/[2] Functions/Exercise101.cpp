#include <iostream>
using namespace std;

float sum(float);

int main()
{
    float accuracy = 10e-6;
    float S = sum(accuracy);

    cout << "The sum is " << S;
    return 0;
}

float sum(float accuracy)
{
    float S = 0;
    int i = 1;
    float current_accuracy = 1;
    while (current_accuracy > accuracy)
    {
        S = S + (float)1 / i;

        current_accuracy = (float)1 / i;

        i = i + 1;
    }
    return S;
}