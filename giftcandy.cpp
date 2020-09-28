#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a,b;
		for(int i=0;i<n;++i){
			int h;
			cin>>h;
			a.push_back(h);
		}
		for(int i=0;i<n;++i){
			int h;
			cin>>h;
			b.push_back(h);
		}
		int sa=*min_element(a.begin(),a.end());
		int sb=*min_element(b.begin(),b.end());
		int64_t  total = 0;
		for(int i=0;i<n;++i){
			total+=max(abs(sa-a[i]),abs(sb-b[i]));		
		}
		cout<<total<<"\n";
	}
	return 0;
}
