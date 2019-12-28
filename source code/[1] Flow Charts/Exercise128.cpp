#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter two values a, b: ";
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    cout << "The acsending values is " << a << " " << b;
    
    return 0;
}