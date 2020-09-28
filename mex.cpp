#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void solve(){
	int n;
	cin>>n;
	int zero=0;
	vector<int> arr,d;
	for(int i=0;i<n;++i){
		int h;
		cin>>h;
		if(h==0){
			zero++;
		}
		arr.push_back(h);
	}
	sort(arr.begin(),arr.end());
	int ans=0,c=0;
	if(zero==0){
		cout<<0;
		return;
	}
	else if(zero==1){
		ans++;
	}
	for(int i=0;i<arr.size()-1;++i){
		if(arr[i]==arr[i+1]){
			d.push_back(arr[i]);
		}
	}
	arr.erase(unique( arr.begin(), arr.end() ), arr.end());
	d.erase(unique( d.begin(), d.end() ), d.end());
	for(int i=0;i<arr.size();++i){
	//	cout<<arr[i]<<" ";
	}
	cout<<endl;
	ans=0;
	bool ok=0;
	for(int i=0;i<arr.size();++i){
		if(i!=arr[i]){
			ans=ans+i;
			ok=1;
			break;
		}
	}
	if(!ok){
		ans+=arr[arr.size()-1]+1;
	}
	ok=0;
	if(d.size()){
		for(int i=0;i<d.size();++i){
			if(i!=d[i]){
				ans+=i;
				ok=1;
				break;
			}
			}
		if(!ok){
			ans+=d[d.size()-1]+1;
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
