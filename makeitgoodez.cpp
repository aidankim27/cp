#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, h,ans = 0;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; ++i)
        {
            cin >> h;
            arr[i] = h;
        }
        long long hold=1,l=n-1;
        while (arr[l] < arr[l - 1])
        {
            l--;
        }
        while(arr[l]>=arr[l-1]){
            l--;
        }
        if(l<0)
            cout<<0<<"\n";
        else
            cout<<l<<"\n";
    }
    return 0;
}