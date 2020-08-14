#include <iostream>
#include <cstdint>
using namespace std;

uint64_t find_numy(uint64_t x, uint64_t y)
{
    uint64_t z;
    if (y % 2 == 0)
    {
        return y * y - x + 1;
    }
    else
    {
        z = y - 1;
        return z * z + 1 + x - 1;
    }
}
uint64_t find_numx(uint64_t x, uint64_t y)
{
    uint64_t z;
    if (x % 2 == 0)
    {
        z = x - 1;
        return z * z + 1 + y - 1;
    }
    else
    {
        return x * x - y + 1;
    }
}
int main()
{
    int n;
    uint64_t x, y;
    cin >> n;
    while (n--)
    {
        cin >> y >> x;
        if (x >= y)
        {
            cout << find_numx(x, y) << endl;
        }
        else
        {
            cout << find_numy(x, y) << endl;
        }
    }
}