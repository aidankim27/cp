#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define PB push_back
//1427a
using namespace std;

void solve(){
        int n,sum=0;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;++i){
            int h;
            cin>>h;
            arr.PB(h);
            sum+=h;
        }
            
        if(sum==0){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        if(sum>0){
            sort(arr.begin(),arr.end(),greater<int>());
        }
        else{
            sort(arr.begin(),arr.end());
        }
        for(int i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
	solve();
    }
}
