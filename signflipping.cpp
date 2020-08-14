#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            ll h;
            cin >> h;
            arr[i] = h;
        }
        for (int i = 0; i < n; i += 2)
        {
            arr[i] = abs(arr[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            arr[i] = abs(arr[i]);
            arr[i] = arr[i] * -1;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}