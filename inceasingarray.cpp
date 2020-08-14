#include <iostream>

using namespace std;
#define ll long long
int main()
{
    ll n, l, x, c;
    cin >> n;
    l = 1;
    c = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x > l)
        {
            l = x;
        }
        while (x < l)
        {
            x += 1;
            c += 1;
        }
    }
    cout << c;
}