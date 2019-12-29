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
    for(int i = x ; i<=y; i++)
    {
        int flag = 0;
        if(i % 4 == 0 && i % 100 != 0)
            flag = 1;
        if(i % 400 == 0)
            flag = 1;

        if(flag == 1)
            cout << i << endl;
    }

    return 0;
}
