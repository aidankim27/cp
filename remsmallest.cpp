#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;++i){
		vector<int> v1;
		v1.clear();
		int n;
		cin>>n;
		for(int j=0;j<n;++j){
			int h;
			cin>>h;
			v1.push_back(h);
		}
		sort(v1.begin(),v1.end());
		bool ok=1;
		for(int j=0;j<v1.size()-1;++j){
			if((abs(v1[j]-v1[j+1])>1)){
				ok=0;
			}	
		}
		if(ok){
			cout<<"YES\n";
		}
		else{
		cout<<"NO\n";
		}
	}
}

