#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;++i){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<" "<<i+2;
            return;
        }
    }
    cout<<"NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
