#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> ans;
    if(n>45){
        cout<<-1;
        return;
        }
    int l=9;
    while(n!=0){
    if(l<=0){
        cout<<-1;
        return;
    }
    if(n-l<0){
        l-=1;
    }
    else{
        ans.push_back(l);
        n-=l;
        l--;
    }
    }
    sort(begin(ans),end(ans));
    string answer="";
    for(int i:ans){
        answer+=to_string(i);
    }
    cout<<answer;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<endl;
    }
}
