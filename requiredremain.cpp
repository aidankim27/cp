#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        if (n % x != y)
        {
            ll k, c = n % x;
            k = n - (c - y);
            if (k > n)
            {
                k -= x;
            }
            cout << k << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}