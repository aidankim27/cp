#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="2020";
    for(int i=0;i<5;++i){
        if(s.substr(0,i)+s.substr(n-4+i,4-i)=="2020"){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

int main(){
	int t; cin>>t;
	while(t--){
	solve();
    cout<<endl;
	}
}
