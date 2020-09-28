#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long 
using namespace std;
// distance and axis
int arr[100];

void solve(){
	int n,k; cin>>n>>k;
	if(n<k){
		cout<<abs(abs(n)-k);
		return;
	}
	else{
		if(n%2==k%2){
			cout<<0;
			return;
		}
		cout<<1;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
	solve();
	cout<<"\n";
	}
}
