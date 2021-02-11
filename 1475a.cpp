#include <bits/stdc++.h>
#define ll long long
#define PB push_back

using namespace std;

const int mxN=2e6;
int dp[mxN];

int rec(int n){
    if(dp[n]!=-1)
        return  dp[n];
    if(n>=2020){
        dp[n] = (rec(n-2021) || rec(n-2020));
    }
    else if(n==0){
        return 1;
    }
    else{
        return 0;
    }
    return dp[n];
}

void solve() {
    int n;
    cin>>n;
    string x = (rec(n)==1)? "YES": "NO";
    cout<<x;
}

int main() {
    fill_n(dp,mxN, -1);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
}
