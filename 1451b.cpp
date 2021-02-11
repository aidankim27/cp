#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
#define ll long long
#define PB push_back
using namespace std;

void solve() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    while (q--) {
        int l, r, c = 0;
        cin >> l >> r;
        l--;
        r--;
        bool ok = 0;
        for (int i = 0; i < l; ++i) {
            if (s[l] == s[i]) {
                ok = 1;
                break;
            }
        }
        if (ok) {
            cout << "YES\n";
            continue;
        }
        for (int i = r + 1; i < n; ++i) {
            if (s[r] == s[i]) {
                ok = 1;
                break;
            }
        }
        if (ok) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}