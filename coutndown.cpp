#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    for (int a = 0; a < t; ++a)
    {
        ll n, k, ans = 0;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = k - 1; i < n; ++i)
        {
            bool b = 1;
            for (int j = 1; j < k; ++j)
            {
                if (arr[i + 1 - j] != j)
                {
                    b = 0;
                }
            }
            ans += b;
        }
        cout << "Case #" << a + 1 << ": " << ans << "\n";
    }
}