#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
#define ll long long
#define PB push_back
using namespace std;

void solve() {
    ll n, s1 = 0, s2 = 0;
    cin >> n;
    ll arr[n], ar1[n], ar2[n];
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i % 2) {
            s1 += arr[i];
            ar1[i] = arr[i];
            ar2[i] = 1;
        } else {
            s2 += arr[i];
            ar2[i] = arr[i];
            ar1[i] = 1;
        }
    }
    if (s1 > s2)
        for (ll i = 0; i < n; ++i) cout << ar1[i] << " ";
    else
        for (ll i = 0; i < n; ++i) cout << ar2[i] << " ";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}
