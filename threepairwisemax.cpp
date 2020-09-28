#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//three pairwise max
void solve(){
	vector<int> a;
	for(int i=0;i<3;++i){
		int h;
		cin>>h;
		a.push_back(h);
	}
	sort(a.begin(),a.end());
	if(a[1]!=a[2]){
		cout<<"NO";
		return;
	}
	cout<<"YES\n"<<a[0]<<" "<<a[0]<<" "<<a[2];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
