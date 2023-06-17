#include <iostream>
using namespace std;

const float PI = 3.14;
int main()
{
    float r, cv, dt;

    cout << "Nhap r = ";
    cin >> r;

    cv = PI * r;
    dt = PI * r * r;

    cout << "\nBan kinh = " << r;
    cout << "\nChu vi = " << cv;
    cout << "\nDien tich = " << dt;

    return 0;
}

