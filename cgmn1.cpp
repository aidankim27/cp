#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long

//CGMN1
using namespace std;

void solve(){
	ll n,m,f=1,l,sum=0;
	cin>>n>>m;
	l=n;
	sum=((n+1)*n)/2;
	while(m--){
		ll k;
		cin>>k;
		if(l==k||f==k||k<n){
			swap(f,l);
		}
		else{
			sum+=(k-l);
			l=k;
		}
		cout<<sum<<endl;
	}
}

int main(){
	solve();
}
