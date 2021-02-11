#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
// 1426a
int arr[100];

void solve(){
    int n,x;
    cin>>n>>x;
    int ans=0,floor=1;
    for(int i=2;i<n;i+=x){
        floor++;
        if(x>=n){
            break;
        }
    }
    cout<<floor;

}

int main(){
	int t; cin>>t;
	while(t--){
	solve();
	cout<<"\n";
	}
}
