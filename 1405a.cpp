#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	for(int i=n-1;i>-1;--i){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

