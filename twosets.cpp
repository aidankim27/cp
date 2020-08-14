#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n * (n + 1) / 2 % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    vector<int> s1, s2;
    ll tracker = 2;
    cout << "YES\n";
    if (n % 2 == 0)
    {
        for (int i = 1; i < n / 2 + 1; ++i)
        {
            if (tracker % 2 == 0)
            {
                s1.push_back(i);
                s1.push_back(n - i + 1);
            }
            else
            {
                s2.push_back(i);
                s2.push_back(n - i + 1);
            }
            tracker += 1;
        }
    }
    else
    {
        for (int i = 2; i < n; i += 2)
        {
            s1.push_back(i);
        }
        for (int i = 1; i < n + 1; i += 2)
        {
            s2.push_back(i);
        }
        ll middle = (n / 2 + 1) / 2;
        ll h;
        for (int i = 0; i < middle; ++i)
        {
            h = s1[i];
            s1[i] = s2[i + 1];
            s2[i + 1] = h;
        }
    }
    cout << s1.size() << "\n";
    for (int i = 0; i < s1.size(); ++i)
    {
        cout << s1[i] << " ";
    }
    cout << "\n";
    cout << s2.size() << "\n";
    for (int i = 0; i < s2.size(); ++i)
    {
        cout << s2[i] << " ";
    }
}