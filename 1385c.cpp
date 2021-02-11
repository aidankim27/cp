#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//1385c
void solve(){
    int n;
    cin>>n;
    int ans=0;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int last=arr[n-1];
    for(int i=n-2;i>-1;--i){
        if(arr[i]<arr[i+1]){
        //found the peak
            for(int j=i-1;j>-1;--j){
                if(arr[j]>arr[j+1]){
                    ans=j+1;
                    break;
                }
            }
            break;
        }
        else{
            last=arr[i];
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
