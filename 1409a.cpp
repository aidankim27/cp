#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void solve(){
	int f,s,ans;
	cin>>f>>s;
	int diff;
	diff=abs(s-f);
	ans=0;
	if(diff){
		if(diff%10){
			ans++;
		}
		ans+=diff/10;
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
