#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (y != z)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES " << x << " " << x << " " << z << "\n";
        }
    }
}