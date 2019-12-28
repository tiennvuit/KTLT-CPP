#include <iostream>
using namespace std;

int main()
{
    float S = 4 - 0.5 - 0.2 - 1.0 / 6;
    long T = 1;
    int i = 1;
    float accuracy = 1;
    while (accuracy >= 10e-10)
    {
        T = T * 16;
        S = S + (float)1 / (T) * (4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6));

        accuracy = (float)1 / (T) * (4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6));

        i = i + 1;
    }

    cout << "The value pi is " << S;

    return 0;
}