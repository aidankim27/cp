#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define PB push_back
//1445B
using namespace std;

void solve(){
    int n,ans=0; 
    cin>>n;
    while(ans*(ans+1)<n*2)
        ans++;
    if(ans*(ans+1)/2==n+1){
        ans++;
    }
    cout<<ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<endl;
    }
}
