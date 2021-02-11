#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define PB push_back
using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s.size() % 2 == 0 && s[0] != ')' && s[s.size()-1] != '(')
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}
