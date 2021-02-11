#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define PB push_back
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int sm = a + b + c;
    if (sm % 9 != 0 || (sm / 9) > min(min(a, c), b)) {
        cout << "NO";
        return;
    }
    cout << "YES";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}