#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter three values a, b, c: ";
    cin >> a >> b >> c;

    if (b < a)
    {
        swap(a, b);
        if (c < a)
            swap(a, c);
        if (c < b)
            swap(b, c);
    }
    else if (c < a)
    {
        swap(c, a);
        if (c < b)
            swap(b, c);
    }
    else
    {
        if (c < b)
        {
            swap(b, c);
        }
    }

    cout << "The acsending values is " << a << " " << b << " " << c;

    return 0;
}