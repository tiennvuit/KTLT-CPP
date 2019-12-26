#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, y1, x2, y2;
	cout << "Nhap toa to diem thu nhat: ";
	cin >> x1 >> y1;
	cout << "\nNhap toa do diem thu hai: ";
	cin >> x2 >> y2;

	float d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	cout << "\nKhoang cach hai diem vua nhap: " << d << endl;

	return 0;
}