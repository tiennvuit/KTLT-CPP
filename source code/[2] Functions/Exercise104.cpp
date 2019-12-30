#include <iostream>
using namespace std;

int main()
{
    float S = 0;
    float accuracy = 1;
    int i = 1;
    // Xem lại định nghĩa độ chính xác trong khai triển Taylor
    while (accuracy >= 10e-6)
    {
        S = S + (float)1 / (i * (i + 1));

        accuracy = (float)1 / (i * (i + 1));
        
        i = i + 1;
    }

    cout << "The sum is " << S;
    return 0;
}