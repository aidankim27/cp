#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// construct the string
using namespace std;

void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	string s,ans;
	string letters[25]={"b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
	for(int i=0;i<(a-b)+1;++i){
		s+="a";
	}
	for(int i=0;i<b-1;++i){
		s+=letters[i];
	}
	for(int i=a;i<n+1;i+=a){
		
		ans+=s;
	}
	if(n%a){
		for(int i=0;i<n%a;++i){
			ans+=s[i];
		}
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
