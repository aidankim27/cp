#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//1445a
void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n],arr2[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    reverse(arr2,arr2+n);

    for(int i=0;i<n;++i){
        if((arr[i]+arr2[i])>x){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

