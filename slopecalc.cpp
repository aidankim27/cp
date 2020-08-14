#include <iostream>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cout << "first x\n";
    cin >> x1;
    cout << "first y\n";
    cin >> y1;
    cout << "second x\n";
    cin >> x2;
    cout << "second y\n";
    cin >> y2;
    double xd, yd;
    xd = x1 - x2;
    yd = y1 - y2;
    cout << yd << "/" << xd;
}