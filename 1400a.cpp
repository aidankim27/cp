#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void solve(){
	int n,h;
	cin>>n;
	string s,ans;
	cin>>s;
	for(int i=0;i<n;++i){
		ans+=s[n-1];
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
