#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter the start year: ";
    cin >> x;
    cout << "Enter the start year: ";
    cin >> y;

    cout <<"The leap years belong to [" << x << ", " << y << "]\n";
    int i = x;
    while(i <= y)
    {
        int flag = 0;
        if(i % 4 == 0 && i % 100 != 0)
            flag = 1;
        if(i % 400 == 0)
            flag = 1;

        if(flag == 1)
            cout << i << endl;
        i = i + 1;
    }

    return 0;
}
