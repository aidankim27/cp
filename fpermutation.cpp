#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr, ans;
        arr.clear();
        ans.clear();
        for (int i = 0; i < n * 2; ++i)
        {
            int h;
            cin >> h;
            arr.push_back(h);
        }

        //created list
        for (int i = 0; i < n * 2; ++i)
        {
            bool ok = 1;
            for (int j = 0; j < ans.size(); ++j)
            {
                if (arr[i] == ans[j])
                {
                    ok = 0;
                }
            }
            if (ok == true)
            {
                ans.push_back(arr[i]);
            }
        }
        //made ans
        //now output that ans
        for (int i = 0; i < ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}