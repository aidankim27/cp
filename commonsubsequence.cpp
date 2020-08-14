#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        vector<int> vans;
        vans.clear();
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i] == b[j])
                {
                    vans.push_back(a[i]);
                }
            }
        }
        if (vans.size() > 0)
        {
            cout << "YES\n 1 " << vans[0];
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}