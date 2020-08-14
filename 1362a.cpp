#include <iostream>
#include <cstdint>
using namespace std;

uint64_t makeq(uint64_t x, uint64_t y)
{
    uint64_t q;
    if (x >= y)
    {

        q = x / y;
    }
    else
    {

        q = y / x;
    }
    return q;
}

bool check(uint64_t x, uint64_t y, uint64_t q)
{
    uint64_t r = q;
    if (x >= y)
    {
        if (x % y != 0)
        {
            cout << -1 << "\n";
            return false;
        }
    }
    else
    {
        if (y % x != 0)
        {

            cout << -1 << "\n";
            return false;
        }
    }
    while (q > 1)
    {
        if (q % 2 != 0)
        {
            cout << -1 << "\n ";
            return false;
        }
        q /= 2;
    }
    return true;
}
int main()
{
    uint64_t n, x, y, q, c;
    cin >> n;
    while (n--)
    {
        c = 0;
        cin >> x >> y;
        q = makeq(x, y);
        if (check(x, y, q) == false)
        {
            continue;
        }
        while (q > 1)
        {

            if (q >= 8 && q % 8 == 0)
            {
                q /= 8;

                c += 1;
            }
            else
            {
                if (q >= 4 && q % 4 == 0)
                {
                    q /= 4;
                    c += 1;
                }
                else
                {
                    q /= 2;
                    c += 1;
                }
            }
        }
        cout << c << endl
             << flush;
    }
    return 0;
}
