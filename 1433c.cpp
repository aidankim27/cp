#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long

//1433C
using namespace std;

void solve(){
	int n,mx,mn;cin>>n;
	int arr[n];
	mx=-1;
	mn=INT_MAX;
	for(int i=0;i<n;++i){
		cin>>arr[i];
		mx=max(arr[i],mx);
		mn=min(arr[i],mn);
	}
	if(mx==mn){
		cout<<-1<<endl;
		return;
	}
	if(arr[0]==mx&&arr[1]<arr[0]){
		cout<<1<<endl;
		return;
	}
	if(arr[n-1]==mx&&arr[n-2]<mx){
		cout<<n<<endl;
		return;
	}
	for(int i=1;i<n-1;++i){
		if(arr[i]==mx){
			if(arr[i-1]<mx||arr[i+1]<mx){
				cout<<i+1<<endl;
				return;
			}
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
	solve();
	}
}
