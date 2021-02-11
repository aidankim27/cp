#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    if(x!=0){
        x--;
    }
    cout<<x<<" "<<y;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}
