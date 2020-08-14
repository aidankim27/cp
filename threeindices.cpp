#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        //next part is find j we need this to be less than the greatest but greater than the least;
        int a, b, c, pos;
        bool ok = 0;
        if (arr[0] == n)
        {
            cout << "NO\n";
            break;
        }
        for (int i = n - 1; i > 0; --i)
        {
            if (arr[i] != n && arr[i] > 1)
            {
                b = arr[i];
                pos = i;
                ok = 1;
                break;
            }
        }
        if (ok == false)
        {
            cout << "NO\n";
            continue;
        }
        ok = 0;
        for (int i = pos; i > -1; --i)
        {
            if (arr[i] > b)
            {
                c = arr[i];
                pos = i;
                ok = 1;
                break;
            }
        }
        if (ok == false)
        {
            cout << "NO\n";
            continue;
        }
        for (int i = pos; i > 0; --i)
        {
            if (arr[i] < b)
            {
                a = arr[i];
                ok = 1;
                break;
            }
        }
        if (ok == false)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n"
             << a << " " << b << " " << c << "\n";
    }
    return 0;
}