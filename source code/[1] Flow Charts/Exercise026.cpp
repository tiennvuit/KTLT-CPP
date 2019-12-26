#include <iostream> 
using namespace std;

int main()
{
    int a, b;

    cout <<"Enter two values a and b: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout <<"Two values a and b after swaped is " << a << " " << b;
    return 0;
}