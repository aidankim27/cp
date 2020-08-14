#include <iostream>
#include <math.h>
#include <cstdint>

using namespace std;

int main()
{
    uint64_t n, s = 1;
    cin >> n;
    const unsigned int M = 1000000007;
    for (int i = 0; i < n; ++i)
    {
        s = s * 2 % M;
    }
    cout << s;
}