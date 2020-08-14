#include <iostream> 
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
    long long l,r;
    cin>>l>>r;
    if((2*l)>r){
        cout<<-1<<" "<<-1<<"\n";
        continue;
    }
    cout<<l<<" "<<2*l<<"\n";
    }
}