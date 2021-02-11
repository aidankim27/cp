#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define PB push_back
//variable sized arrays 
using namespace std;

void solve(){
	int n,q;
	cin>>n>>q;	
    vector<vector<int>> arr;
	for(int i=0;i<n;++i){
        int s;
        cin>>s;
        vector<int> tarr;
		for(int j=0;j<s;++j){
            int h;
            cin>>h;
            tarr.PB(h);
        }
        arr.PB(tarr);
	}
	for(int i=0;i<q;++i){
		int index,pos;
		cin>>index>>pos;
		cout<<arr[index][pos]<<'\n';
	}
}
int main(){
	solve();
}
